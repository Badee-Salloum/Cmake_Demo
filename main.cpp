#include <QtWidgets>


int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QLabel label("Hello world!");

    label.resize(640, 480);
    label.setAlignment(Qt::AlignCenter);
    label.setStyleSheet("font: 50px; color: brown;");
    label.show();

    return app.exec();
}
