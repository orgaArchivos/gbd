/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCrear_Tabla;
    QAction *actionCrear_Campo;
    QAction *actionCrear_Registro;
    QAction *actionAbrir_Archivo;
    QAction *actionAbrir_Tabla;
    QAction *actionNuevo_Archivo;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *tableView_2;
    QFrame *frame;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuCrear;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(837, 500);
        QIcon icon;
        icon.addFile(QStringLiteral(":/iconos/access.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionCrear_Tabla = new QAction(MainWindow);
        actionCrear_Tabla->setObjectName(QStringLiteral("actionCrear_Tabla"));
        actionCrear_Campo = new QAction(MainWindow);
        actionCrear_Campo->setObjectName(QStringLiteral("actionCrear_Campo"));
        actionCrear_Registro = new QAction(MainWindow);
        actionCrear_Registro->setObjectName(QStringLiteral("actionCrear_Registro"));
        actionAbrir_Archivo = new QAction(MainWindow);
        actionAbrir_Archivo->setObjectName(QStringLiteral("actionAbrir_Archivo"));
        actionAbrir_Tabla = new QAction(MainWindow);
        actionAbrir_Tabla->setObjectName(QStringLiteral("actionAbrir_Tabla"));
        actionNuevo_Archivo = new QAction(MainWindow);
        actionNuevo_Archivo->setObjectName(QStringLiteral("actionNuevo_Archivo"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(130, 20, 691, 421));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 10, 651, 371));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 10, 651, 371));
        tabWidget->addTab(tab_2, QString());
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 39, 111, 401));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 51, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 837, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuCrear = new QMenu(menuBar);
        menuCrear->setObjectName(QStringLiteral("menuCrear"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuCrear->menuAction());
        menuArchivo->addAction(actionAbrir_Archivo);
        menuArchivo->addAction(actionAbrir_Tabla);
        menuArchivo->addAction(actionNuevo_Archivo);
        menuCrear->addAction(actionCrear_Tabla);
        menuCrear->addAction(actionCrear_Campo);
        menuCrear->addAction(actionCrear_Registro);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mini Access", 0));
        actionCrear_Tabla->setText(QApplication::translate("MainWindow", "Crear Tabla", 0));
        actionCrear_Campo->setText(QApplication::translate("MainWindow", "Crear Campo", 0));
        actionCrear_Registro->setText(QApplication::translate("MainWindow", "Crear Registro", 0));
        actionAbrir_Archivo->setText(QApplication::translate("MainWindow", "Abrir Archivo", 0));
        actionAbrir_Tabla->setText(QApplication::translate("MainWindow", "Abrir Tabla", 0));
        actionNuevo_Archivo->setText(QApplication::translate("MainWindow", "Nuevo Archivo", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Dise\303\261o", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Datos", 0));
        label->setText(QApplication::translate("MainWindow", "Tablas", 0));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0));
        menuCrear->setTitle(QApplication::translate("MainWindow", "Crear", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
