import QtQuick 2.0
import Sailfish.Silica 1.0
;import org.vostok.qdownloader 1.0


/**
  * this sampel page show the logic to download a remote source from qml and display it
  * as a picture (supposely the source is an image !)
  * it will fail to download twice because the target exist
  * use the delete button, then you can downlod it again
  **/

Page {
    id: page

    allowedOrientations: Orientation.Portrait
    anchors.fill: parent

    property string sourceurl: "https://jolla.com/wp-content/uploads/2018/02/Ambience_Hero_mainpage.jpg"
    property string targeturl: "/tmp/test_img.jpg"

    Image {
        id:picture
        width: parent.width
        height: width / 1.6
        fillMode: Image.PreserveAspectFit
        anchors {
            top:parent.top
            topMargin: Theme.itemSizeExtraLarge
        }

        clip: true
        source: "image://theme/icon-m-jolla"
    }

    ProgressBar {
        id:loading
        width: parent.width - (Theme.horizontalPageMargin * 2)
        height: Theme.iconSizeSmall
        x:Theme.horizontalPageMargin
        anchors {
            top : picture.bottom
            topMargin: Theme.paddingMedium
        }

        minimumValue: 0
        maximumValue: 100
        value: 0
    }

    // this button start downloading an image from jolla site then
    // display it
    Button {
        id:bp
        width: parent.width - Theme.iconSizeMedium - (Theme.horizontalPageMargin * 3)
        height: Theme.itemSizeMedium
        x:Theme.horizontalPageMargin
        anchors {
            bottom: parent.bottom
            bottomMargin: Theme.horizontalPageMargin
        }

        text: "Download (" + qdownloader.pending + " to go)"
        color: Theme.primaryColor

        enabled: qdownloader.pending === 0

        onClicked: {
            picture.source = "image://theme/icon-m-cloud-download"

           // the sample don't redirect initial error to the signal, we catch then here
           if(qdownloader.start(sourceurl, targeturl,"File downloaded") === false ) {
               // error detected before download (file already exist, r/w error etc...)
               console.log("QDownloader/QML : error on start")
               picture.source = "image://theme/icon-lock-warning"
           }
        }
    }

    // use this button to delete the downloaded file
    IconButton {
        id: bp_remove
        icon.source: "image://theme/icon-m-delete"
        icon.fillMode: Image.Stretch
        width: Theme.iconSizeMedium
        height: width
        anchors {
            verticalCenter: bp.verticalCenter
            left: bp.right
            leftMargin: Theme.horizontalPageMargin
        }
        enabled: false

        onClicked: {
            qdummyfs.remove(targeturl);
            picture.source = "image://theme/icon-m-jolla"
            enabled = false
        }
     }

    // this is just a simple callback algo to demonstrate the use of the library
    Connections {
        target: qdownloader
        onDownloading: {
            if(total > 0 && total >= read) {
                loading.value = (read * 100) / total
            }
        }

        onSuccess: {
            picture.source = "file:/" + target
            bp_remove.enabled = true
        }

        onError: {
            console.log("QDownloader/QML : error " + status + " for " + url)
            picture.source = "image://theme/icon-m-dismiss"
        }
    }
}
