#include <QtWidgets>


int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QLabel label;
    label.setPixmap(QPixmap(":/images/Qt.png"));

    label.resize(640, 480);
    label.setScaledContents(true);
    label.show();

    return app.exec();
}
