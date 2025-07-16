/********************************************************************************
** Form generated from reading UI file 'ventana_productos.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_PRODUCTOS_H
#define UI_VENTANA_PRODUCTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ventana_Productos
{
public:
    QWidget *centralwidget;
    QWidget *Capa0;
    QLabel *label;
    QPushButton *Volver;
    QWidget *Capa1;
    QTabWidget *Carpeta;
    QWidget *Productos;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget_3;
    QWidget *Recomendado;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QWidget *Capa2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QComboBox *comboBox_4;
    QFrame *frame;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ventana_Productos)
    {
        if (Ventana_Productos->objectName().isEmpty())
            Ventana_Productos->setObjectName("Ventana_Productos");
        Ventana_Productos->resize(800, 600);
        Ventana_Productos->setStyleSheet(QString::fromUtf8("#Capa0{\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"#Capa1{\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#Capa2{\n"
"	background-color: rgb(85, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"#Volver{\n"
"	border: 2px solid rgb(65, 195, 195);\n"
"	border-top-left-radius: 10px;\n"
"	border-bottom-left-radius: 10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#Volver:hover{\n"
"	\n"
"	background-color: rgb(169, 255, 242);\n"
"}\n"
"\n"
"#pushButton{\n"
"	border: 2px solid rgb(65, 195, 195);\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton:hover{\n"
"	background-color: rgb(169, 255, 242);\n"
"}\n"
"\n"
"\n"
"\n"
"#frame{\n"
"	border:1px solid #42c7c7;\n"
"	border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#lineEdit{\n"
"	border-top: 1px solid #42c7c7;\n"
"	border-right: 1px solid #42c7c7;\n"
"	border-bottom: 1px solid #42c7c7;\n"
"}\n"
"\n"
"QListWidget{\n"
"	background-c"
                        "olor: #f8f8f8;\n"
"}\n"
"\n"
"QListWidget::item { \n"
"	border-bottom: 1px solid #e0e0e0;\n"
"	padding: 8px; \n"
"}\n"
"\n"
"QListWidget::item:selected { \n"
"	background-color: #e0f0ff; \n"
"}"));
        centralwidget = new QWidget(Ventana_Productos);
        centralwidget->setObjectName("centralwidget");
        Capa0 = new QWidget(centralwidget);
        Capa0->setObjectName("Capa0");
        Capa0->setGeometry(QRect(0, 0, 801, 101));
        label = new QLabel(Capa0);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 20, 311, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Volver = new QPushButton(Capa0);
        Volver->setObjectName("Volver");
        Volver->setGeometry(QRect(10, 10, 91, 24));
        Capa1 = new QWidget(centralwidget);
        Capa1->setObjectName("Capa1");
        Capa1->setGeometry(QRect(0, 70, 801, 481));
        Carpeta = new QTabWidget(Capa1);
        Carpeta->setObjectName("Carpeta");
        Carpeta->setGeometry(QRect(10, 50, 371, 421));
        Productos = new QWidget();
        Productos->setObjectName("Productos");
        scrollArea = new QScrollArea(Productos);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-10, -10, 381, 411));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 379, 409));
        listWidget_3 = new QListWidget(scrollAreaWidgetContents);
        listWidget_3->setObjectName("listWidget_3");
        listWidget_3->setGeometry(QRect(10, 10, 361, 391));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Carpeta->addTab(Productos, QString());
        Recomendado = new QWidget();
        Recomendado->setObjectName("Recomendado");
        scrollArea_2 = new QScrollArea(Recomendado);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(-10, -10, 381, 411));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 379, 409));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 10, 361, 391));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        Carpeta->addTab(Recomendado, QString());
        listWidget_2 = new QListWidget(Capa1);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(435, 181, 341, 285));
        Capa2 = new QWidget(Capa1);
        Capa2->setObjectName("Capa2");
        Capa2->setGeometry(QRect(440, 70, 331, 141));
        lineEdit = new QLineEdit(Capa2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 10, 113, 21));
        comboBox = new QComboBox(Capa2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(190, 10, 111, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(false);
        comboBox->setFont(font1);
        comboBox_2 = new QComboBox(Capa2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(10, 40, 100, 22));
        comboBox_2->setFont(font1);
        comboBox_3 = new QComboBox(Capa2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(120, 40, 91, 22));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        comboBox_3->setFont(font2);
        pushButton = new QPushButton(Capa2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 80, 91, 24));
        comboBox_4 = new QComboBox(Capa2);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(220, 40, 91, 22));
        comboBox_4->setFont(font2);
        frame = new QFrame(Capa2);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 81, 21));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 51, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setBold(true);
        label_2->setFont(font3);
        frame->raise();
        lineEdit->raise();
        comboBox->raise();
        comboBox_2->raise();
        comboBox_3->raise();
        pushButton->raise();
        comboBox_4->raise();
        Capa2->raise();
        Carpeta->raise();
        listWidget_2->raise();
        Ventana_Productos->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ventana_Productos);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Ventana_Productos->setMenuBar(menubar);
        statusbar = new QStatusBar(Ventana_Productos);
        statusbar->setObjectName("statusbar");
        Ventana_Productos->setStatusBar(statusbar);

        retranslateUi(Ventana_Productos);

        Carpeta->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ventana_Productos);
    } // setupUi

    void retranslateUi(QMainWindow *Ventana_Productos)
    {
        Ventana_Productos->setWindowTitle(QCoreApplication::translate("Ventana_Productos", "Productos", nullptr));
        label->setText(QCoreApplication::translate("Ventana_Productos", "Bienvenido a MaxiStore", nullptr));
        Volver->setText(QCoreApplication::translate("Ventana_Productos", "Cerrar Sesion", nullptr));
        Carpeta->setTabText(Carpeta->indexOf(Productos), QCoreApplication::translate("Ventana_Productos", "Productos", nullptr));
        Carpeta->setTabText(Carpeta->indexOf(Recomendado), QCoreApplication::translate("Ventana_Productos", "Recomendados", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Ventana_Productos", "Categorias ", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Ventana_Productos", "Ropa de mujer", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Ventana_Productos", "Ropa de hombre", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Ventana_Productos", "Ropa de ni\303\261o", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Ventana_Productos", "Calzado", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("Ventana_Productos", "Maquillaje rostro", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("Ventana_Productos", "Maquillaje ojos/labios", nullptr));

        comboBox->setCurrentText(QString());
        comboBox->setPlaceholderText(QCoreApplication::translate("Ventana_Productos", "Categorias", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Ventana_Productos", "Marca", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Ventana_Productos", "Zara", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Ventana_Productos", "Nike", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Ventana_Productos", "Maybelline", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Ventana_Productos", "Lebi's", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("Ventana_Productos", "H&M", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("Ventana_Productos", "L'Or\303\251al", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("Ventana_Productos", "Adidas", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("Ventana_Productos", "MAC", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("Ventana_Productos", "Gap", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("Ventana_Productos", "Revlon", nullptr));

        comboBox_2->setPlaceholderText(QCoreApplication::translate("Ventana_Productos", "Marca", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Ventana_Productos", "Precio min", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Ventana_Productos", "10$", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Ventana_Productos", "20$", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Ventana_Productos", "30$", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Ventana_Productos", "40$", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("Ventana_Productos", "50$", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("Ventana_Productos", "60$", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("Ventana_Productos", "70$", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("Ventana_Productos", "80$", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("Ventana_Productos", "90$", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("Ventana_Productos", "100$", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("Ventana_Productos", "110$", nullptr));
        comboBox_3->setItemText(12, QCoreApplication::translate("Ventana_Productos", "120$", nullptr));
        comboBox_3->setItemText(13, QCoreApplication::translate("Ventana_Productos", "130$", nullptr));
        comboBox_3->setItemText(14, QCoreApplication::translate("Ventana_Productos", "140$", nullptr));
        comboBox_3->setItemText(15, QCoreApplication::translate("Ventana_Productos", "150$", nullptr));
        comboBox_3->setItemText(16, QCoreApplication::translate("Ventana_Productos", "160$", nullptr));
        comboBox_3->setItemText(17, QCoreApplication::translate("Ventana_Productos", "170$", nullptr));
        comboBox_3->setItemText(18, QCoreApplication::translate("Ventana_Productos", "180$", nullptr));
        comboBox_3->setItemText(19, QCoreApplication::translate("Ventana_Productos", "190$", nullptr));
        comboBox_3->setItemText(20, QCoreApplication::translate("Ventana_Productos", "200$", nullptr));

        comboBox_3->setPlaceholderText(QCoreApplication::translate("Ventana_Productos", "Precio min", nullptr));
        pushButton->setText(QCoreApplication::translate("Ventana_Productos", "Aplicar Filtros", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Ventana_Productos", "Precio Max", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Ventana_Productos", "10$", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Ventana_Productos", "20$", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Ventana_Productos", "30$", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("Ventana_Productos", "40$", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("Ventana_Productos", "50$", nullptr));
        comboBox_4->setItemText(6, QCoreApplication::translate("Ventana_Productos", "60$", nullptr));
        comboBox_4->setItemText(7, QCoreApplication::translate("Ventana_Productos", "70$", nullptr));
        comboBox_4->setItemText(8, QCoreApplication::translate("Ventana_Productos", "80$", nullptr));
        comboBox_4->setItemText(9, QCoreApplication::translate("Ventana_Productos", "90$", nullptr));
        comboBox_4->setItemText(10, QCoreApplication::translate("Ventana_Productos", "100$", nullptr));
        comboBox_4->setItemText(11, QCoreApplication::translate("Ventana_Productos", "110$", nullptr));
        comboBox_4->setItemText(12, QCoreApplication::translate("Ventana_Productos", "120$", nullptr));
        comboBox_4->setItemText(13, QCoreApplication::translate("Ventana_Productos", "130$", nullptr));
        comboBox_4->setItemText(14, QCoreApplication::translate("Ventana_Productos", "140$", nullptr));
        comboBox_4->setItemText(15, QCoreApplication::translate("Ventana_Productos", "150$", nullptr));
        comboBox_4->setItemText(16, QCoreApplication::translate("Ventana_Productos", "160$", nullptr));
        comboBox_4->setItemText(17, QCoreApplication::translate("Ventana_Productos", "170$", nullptr));
        comboBox_4->setItemText(18, QCoreApplication::translate("Ventana_Productos", "180$", nullptr));
        comboBox_4->setItemText(19, QCoreApplication::translate("Ventana_Productos", "190$", nullptr));
        comboBox_4->setItemText(20, QCoreApplication::translate("Ventana_Productos", "200$", nullptr));

        comboBox_4->setPlaceholderText(QCoreApplication::translate("Ventana_Productos", "Precio Max", nullptr));
        label_2->setText(QCoreApplication::translate("Ventana_Productos", "Buscar:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ventana_Productos: public Ui_Ventana_Productos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_PRODUCTOS_H
