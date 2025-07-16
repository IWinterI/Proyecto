/********************************************************************************
** Form generated from reading UI file 'productodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTODIALOG_H
#define UI_PRODUCTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_productodialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *lblNombre;
    QLabel *lblMarca;
    QLabel *lblPrecio;
    QLabel *lblCalidad;
    QLabel *lblCategoria;
    QWidget *widget;
    QPushButton *pushButton;
    QFrame *frame;

    void setupUi(QDialog *productodialog)
    {
        if (productodialog->objectName().isEmpty())
            productodialog->setObjectName("productodialog");
        productodialog->resize(300, 192);
        productodialog->setStyleSheet(QString::fromUtf8("#frame{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#widget{\n"
"	border-radius:50px;\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#pushButton{\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton:hover{\n"
"	\n"
"	background-color: rgb(170, 255, 255);\n"
"}\n"
""));
        label = new QLabel(productodialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 61, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(productodialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 61, 16));
        label_2->setFont(font);
        label_3 = new QLabel(productodialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 70, 49, 16));
        label_3->setFont(font);
        label_4 = new QLabel(productodialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 100, 61, 16));
        label_4->setFont(font);
        label_5 = new QLabel(productodialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 130, 71, 16));
        label_5->setFont(font);
        lblNombre = new QLabel(productodialog);
        lblNombre->setObjectName("lblNombre");
        lblNombre->setGeometry(QRect(90, 10, 161, 16));
        lblMarca = new QLabel(productodialog);
        lblMarca->setObjectName("lblMarca");
        lblMarca->setGeometry(QRect(90, 40, 161, 16));
        lblPrecio = new QLabel(productodialog);
        lblPrecio->setObjectName("lblPrecio");
        lblPrecio->setGeometry(QRect(90, 70, 181, 16));
        lblCalidad = new QLabel(productodialog);
        lblCalidad->setObjectName("lblCalidad");
        lblCalidad->setGeometry(QRect(90, 100, 171, 16));
        lblCategoria = new QLabel(productodialog);
        lblCategoria->setObjectName("lblCategoria");
        lblCategoria->setGeometry(QRect(100, 130, 181, 16));
        widget = new QWidget(productodialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-50, 9, 311, 231));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 150, 75, 24));
        frame = new QFrame(productodialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-11, -11, 401, 221));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->raise();
        widget->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        lblNombre->raise();
        lblMarca->raise();
        lblPrecio->raise();
        lblCalidad->raise();
        lblCategoria->raise();

        retranslateUi(productodialog);

        QMetaObject::connectSlotsByName(productodialog);
    } // setupUi

    void retranslateUi(QDialog *productodialog)
    {
        productodialog->setWindowTitle(QCoreApplication::translate("productodialog", "Producto", nullptr));
        label->setText(QCoreApplication::translate("productodialog", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("productodialog", "Marca:", nullptr));
        label_3->setText(QCoreApplication::translate("productodialog", "Precio:", nullptr));
        label_4->setText(QCoreApplication::translate("productodialog", "Calidad:", nullptr));
        label_5->setText(QCoreApplication::translate("productodialog", "Categoria:", nullptr));
        lblNombre->setText(QCoreApplication::translate("productodialog", "TextLabel", nullptr));
        lblMarca->setText(QCoreApplication::translate("productodialog", "TextLabel", nullptr));
        lblPrecio->setText(QCoreApplication::translate("productodialog", "TextLabel", nullptr));
        lblCalidad->setText(QCoreApplication::translate("productodialog", "TextLabel", nullptr));
        lblCategoria->setText(QCoreApplication::translate("productodialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("productodialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class productodialog: public Ui_productodialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTODIALOG_H
