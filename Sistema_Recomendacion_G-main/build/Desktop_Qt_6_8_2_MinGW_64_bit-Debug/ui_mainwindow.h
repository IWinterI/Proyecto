/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *capa0;
    QLabel *label;
    QLabel *label_2;
    QWidget *capa1;
    QPushButton *Regis;
    QPushButton *Inicio;
    QPushButton *salir;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *ingresar;
    QPushButton *volver;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(250, 220);
        MainWindow->setStyleSheet(QString::fromUtf8("#capa0 {\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#capa1{\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"#Regis{\n"
"	border: 2px solid rgb(85, 255, 255);\n"
"	border-radius: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#Regis:hover{\n"
"	background-color: rgb(144, 255, 246);\n"
"}\n"
"\n"
"#Inicio{\n"
"	border: 2px solid rgb(85, 255, 255);\n"
"	border-radius: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#Inicio:hover{\n"
"	background-color: rgb(144, 255, 246);\n"
"}\n"
"\n"
"#salir{\n"
"	border: 2px solid rgb(85, 255, 255);\n"
"	border-radius: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#salir:hover{\n"
"	background-color: rgb(144, 255, 246);\n"
"}\n"
"\n"
"#ingresar{\n"
"	border: 2px solid rgb(85, 255, 255);\n"
"	border-radius: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#ingresar:hover {\n"
"	background-color: rgb(144, 255, 246);\n"
"}\n"
"\n"
"#volver{\n"
"	border: 2px "
                        "solid rgb(85, 255, 255);\n"
"	border-radius: 5px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#volver:hover{\n"
"	background-color: rgb(144, 255, 246);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        capa0 = new QWidget(centralwidget);
        capa0->setObjectName("capa0");
        capa0->setGeometry(QRect(0, 0, 251, 91));
        capa0->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(capa0);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 211, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(capa0);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(10, 9, 231, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        capa1 = new QWidget(centralwidget);
        capa1->setObjectName("capa1");
        capa1->setGeometry(QRect(-1, 49, 251, 171));
        capa1->setStyleSheet(QString::fromUtf8(""));
        Regis = new QPushButton(capa1);
        Regis->setObjectName("Regis");
        Regis->setEnabled(true);
        Regis->setGeometry(QRect(80, 10, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(10);
        font1.setBold(true);
        Regis->setFont(font1);
        Regis->setStyleSheet(QString::fromUtf8(""));
        Inicio = new QPushButton(capa1);
        Inicio->setObjectName("Inicio");
        Inicio->setGeometry(QRect(80, 60, 91, 31));
        Inicio->setFont(font1);
        Inicio->setStyleSheet(QString::fromUtf8(""));
        salir = new QPushButton(capa1);
        salir->setObjectName("salir");
        salir->setGeometry(QRect(90, 110, 75, 31));
        salir->setFont(font1);
        salir->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(capa1);
        label_3->setObjectName("label_3");
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(60, 10, 131, 20));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(capa1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(70, 30, 113, 22));
        label_4 = new QLabel(capa1);
        label_4->setObjectName("label_4");
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(60, 60, 141, 20));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_2 = new QLineEdit(capa1);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(70, 80, 113, 22));
        ingresar = new QPushButton(capa1);
        ingresar->setObjectName("ingresar");
        ingresar->setEnabled(true);
        ingresar->setGeometry(QRect(90, 110, 75, 24));
        volver = new QPushButton(capa1);
        volver->setObjectName("volver");
        volver->setGeometry(QRect(90, 140, 75, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MaxiStore", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Bienvenido a MaxiStore", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Inicio de sesion", nullptr));
        Regis->setText(QCoreApplication::translate("MainWindow", "Registrase", nullptr));
        Inicio->setText(QCoreApplication::translate("MainWindow", "Iniciar sesion", nullptr));
        salir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ingrese su usuario:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Igrese su contrase\303\261a:", nullptr));
        ingresar->setText(QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        volver->setText(QCoreApplication::translate("MainWindow", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
