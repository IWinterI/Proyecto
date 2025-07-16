QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    catalogo.cpp \
    main.cpp \
    mainwindow.cpp \
    productodialog.cpp \
    recomendacion.cpp \
    registro_usuario.cpp \
    usuario.cpp \
    utilidades.cpp \
    ventana_productos.cpp

HEADERS += \
    catalogo.h \
    estructuras.h \
    mainwindow.h \
    productodialog.h \
    recomendacion.h \
    registro_usuario.h \
    usuario.h \
    utilidades.h \
    ventana_productos.h

FORMS += \
    mainwindow.ui \
    productodialog.ui \
    registro_usuario.ui \
    ventana_productos.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Recursos.qrc
