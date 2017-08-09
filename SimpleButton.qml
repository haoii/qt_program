import QtQuick 2.3

Rectangle {
    id: simpleButton
    color: "grey"
    width: 150; height: 75

    Text {
        id: buttonLabel
        anchors.centerIn: parent
        text: "button label"
    }

    MouseArea {
        id: buttonMouseArea

        // Anchor all sides of the mouse area to the rectangle's anchors
        anchors.fill: parent
        // onClicked handles valid mouse button clicks
        onClicked: console.log(buttonLabel.text + " clicked")
    }
}
