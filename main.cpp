#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
//适配高清屏
#if (QT_VERSION >= QT_VERSION_CHECK(5,9,0))
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication a(argc, argv);
    MainWindow w;
    //loading load;
    //load.show();
    w.show();
    return a.exec();
}