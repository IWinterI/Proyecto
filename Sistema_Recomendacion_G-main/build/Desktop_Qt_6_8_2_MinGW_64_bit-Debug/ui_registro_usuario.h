/********************************************************************************
** Form generated from reading UI file 'registro_usuario.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_USUARIO_H
#define UI_REGISTRO_USUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro_Usuario
{
public:
    QWidget *Capa0;
    QLabel *label;
    QWidget *Capa1;
    QDialogButtonBox *buttonBox;
    QLineEdit *RNombre;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *RApellido;
    QLabel *label_4;
    QLineEdit *RUsuario;
    QLabel *label_5;
    QLineEdit *RContras;
    QLabel *label_6;
    QWidget *Capa3;
    QWidget *CapaN;
    QWidget *CapaA;
    QWidget *CapaU;
    QWidget *CapaC;
    QGroupBox *brandsGroup;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;

    void setupUi(QDialog *Registro_Usuario)
    {
        if (Registro_Usuario->objectName().isEmpty())
            Registro_Usuario->setObjectName("Registro_Usuario");
        Registro_Usuario->resize(600, 300);
        Registro_Usuario->setStyleSheet(QString::fromUtf8("#Capa0{\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#Capa1{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#Capa3{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#CapaN{\n"
"	border-top-right-radius: 10px;\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#CapaA{\n"
"	border-top-right-radius: 10px;\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#CapaU{\n"
"	border-top-right-radius: 10px;\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#CapaC{\n"
"	border-top-right-radius: 10px;\n"
"	background-color: rgb(85, 255, 255);\n"
"}"));
        Capa0 = new QWidget(Registro_Usuario);
        Capa0->setObjectName("Capa0");
        Capa0->setGeometry(QRect(0, 0, 601, 91));
        label = new QLabel(Capa0);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 581, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Capa1 = new QWidget(Registro_Usuario);
        Capa1->setObjectName("Capa1");
        Capa1->setGeometry(QRect(-1, 49, 601, 251));
        buttonBox = new QDialogButtonBox(Capa1);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(250, 210, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        RNombre = new QLineEdit(Capa1);
        RNombre->setObjectName("RNombre");
        RNombre->setGeometry(QRect(10, 30, 121, 22));
        RNombre->setMaxLength(30);
        label_2 = new QLabel(Capa1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 49, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(Capa1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 60, 49, 16));
        label_3->setFont(font1);
        RApellido = new QLineEdit(Capa1);
        RApellido->setObjectName("RApellido");
        RApellido->setGeometry(QRect(10, 80, 121, 22));
        RApellido->setMaxLength(30);
        label_4 = new QLabel(Capa1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 110, 49, 16));
        label_4->setFont(font1);
        RUsuario = new QLineEdit(Capa1);
        RUsuario->setObjectName("RUsuario");
        RUsuario->setGeometry(QRect(10, 130, 121, 22));
        RUsuario->setMaxLength(30);
        label_5 = new QLabel(Capa1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 160, 71, 16));
        label_5->setFont(font1);
        RContras = new QLineEdit(Capa1);
        RContras->setObjectName("RContras");
        RContras->setGeometry(QRect(10, 180, 121, 22));
        RContras->setMaxLength(30);
        RContras->setEchoMode(QLineEdit::EchoMode::Normal);
        label_6 = new QLabel(Capa1);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 10, 271, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        font2.setBold(true);
        label_6->setFont(font2);
        Capa3 = new QWidget(Capa1);
        Capa3->setObjectName("Capa3");
        Capa3->setGeometry(QRect(409, 199, 211, 61));
        CapaN = new QWidget(Capa1);
        CapaN->setObjectName("CapaN");
        CapaN->setGeometry(QRect(10, 10, 111, 41));
        CapaA = new QWidget(Capa1);
        CapaA->setObjectName("CapaA");
        CapaA->setGeometry(QRect(10, 60, 111, 41));
        CapaU = new QWidget(Capa1);
        CapaU->setObjectName("CapaU");
        CapaU->setGeometry(QRect(10, 110, 111, 41));
        CapaC = new QWidget(Capa1);
        CapaC->setObjectName("CapaC");
        CapaC->setGeometry(QRect(10, 160, 111, 41));
        brandsGroup = new QGroupBox(Capa1);
        brandsGroup->setObjectName("brandsGroup");
        brandsGroup->setGeometry(QRect(300, 40, 211, 131));
        checkBox = new QCheckBox(brandsGroup);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 20, 101, 20));
        checkBox_3 = new QCheckBox(brandsGroup);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(10, 40, 91, 20));
        checkBox_5 = new QCheckBox(brandsGroup);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(10, 60, 121, 20));
        checkBox_7 = new QCheckBox(brandsGroup);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setGeometry(QRect(10, 80, 76, 20));
        checkBox_8 = new QCheckBox(brandsGroup);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setGeometry(QRect(10, 100, 76, 20));
        checkBox_2 = new QCheckBox(brandsGroup);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(110, 20, 111, 20));
        checkBox_4 = new QCheckBox(brandsGroup);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(110, 40, 76, 20));
        checkBox_6 = new QCheckBox(brandsGroup);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(110, 60, 141, 20));
        checkBox_9 = new QCheckBox(brandsGroup);
        checkBox_9->setObjectName("checkBox_9");
        checkBox_9->setGeometry(QRect(110, 80, 76, 20));
        checkBox_10 = new QCheckBox(brandsGroup);
        checkBox_10->setObjectName("checkBox_10");
        checkBox_10->setGeometry(QRect(110, 100, 76, 20));
        label_6->raise();
        Capa3->raise();
        buttonBox->raise();
        CapaN->raise();
        CapaA->raise();
        CapaU->raise();
        CapaC->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        RNombre->raise();
        RApellido->raise();
        RUsuario->raise();
        RContras->raise();
        brandsGroup->raise();

        retranslateUi(Registro_Usuario);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Registro_Usuario, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Registro_Usuario, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Registro_Usuario);
    } // setupUi

    void retranslateUi(QDialog *Registro_Usuario)
    {
        Registro_Usuario->setWindowTitle(QCoreApplication::translate("Registro_Usuario", "Registro Usuario", nullptr));
        label->setText(QCoreApplication::translate("Registro_Usuario", "Sistema de registro de usuario", nullptr));
        RNombre->setPlaceholderText(QCoreApplication::translate("Registro_Usuario", "Solo letras y espacios", nullptr));
        label_2->setText(QCoreApplication::translate("Registro_Usuario", "Nombre:", nullptr));
        label_3->setText(QCoreApplication::translate("Registro_Usuario", "Apellido:", nullptr));
        RApellido->setPlaceholderText(QCoreApplication::translate("Registro_Usuario", "Solo letras y espacios", nullptr));
        label_4->setText(QCoreApplication::translate("Registro_Usuario", "Usuario:", nullptr));
        RUsuario->setPlaceholderText(QCoreApplication::translate("Registro_Usuario", "Sin espacios", nullptr));
        label_5->setText(QCoreApplication::translate("Registro_Usuario", "Contrase\303\261a:", nullptr));
        RContras->setPlaceholderText(QCoreApplication::translate("Registro_Usuario", "M\303\255nimo 8 caracteres", nullptr));
        label_6->setText(QCoreApplication::translate("Registro_Usuario", "Seleccione marcas de su preferencia:", nullptr));
        brandsGroup->setTitle(QString());
        checkBox->setText(QCoreApplication::translate("Registro_Usuario", "Zara", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Registro_Usuario", "Maybelline", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Registro_Usuario", "HyM", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Registro_Usuario", "Adidas", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Registro_Usuario", "Gap", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Registro_Usuario", "Nike", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Registro_Usuario", "Levi's", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Registro_Usuario", "L'Or\303\251al", nullptr));
        checkBox_9->setText(QCoreApplication::translate("Registro_Usuario", "MAC", nullptr));
        checkBox_10->setText(QCoreApplication::translate("Registro_Usuario", "Revlon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro_Usuario: public Ui_Registro_Usuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_USUARIO_H
