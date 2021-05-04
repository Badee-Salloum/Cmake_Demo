#include <QtWidgets>

#include "add.h"


int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    // image label to display Qt.png from resources
    QLabel label;
    label.setPixmap(QPixmap(":/images/Qt.png"));

    label.resize(640, 480);
    label.setScaledContents(true);
    label.show();

    // text label to diplay 1 + 2 calculated using AddLib
    QLabel textLabel;
    Adder adder;
    textLabel.setText(QString::number(adder.add(1, 2)));

    textLabel.setAlignment(Qt::AlignCenter);
    textLabel.setStyleSheet("font: 50px; color: brown;");
    textLabel.show();

    return app.exec();
}
