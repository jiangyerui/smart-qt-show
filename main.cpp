#include "mainwindow.h"
#include <QApplication>
#include <QtWebEngineWidgets/QWebEngineView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWebEngineView view;
    view.load(QUrl("http://www.lclot.com"));
    view.showFullScreen();
    view.setWindowTitle("联创广汇");
    view.show();


//    MainWindow w;
//    w.show();

    return a.exec();
}
