#include "interfaceadaptor.h"
#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include "mainwindow.h"

InterfaceAdaptor::InterfaceAdaptor(QObject *parent):QDBusAbstractAdaptor(parent){

   setAutoRelaySignals(true);
}

InterfaceAdaptor::~InterfaceAdaptor(){

}

void InterfaceAdaptor::ShowDownWindow(  QString fileURL ){

    auto *mainUI = (MainWindow*)qobject_cast<QWidget*>(parent());
    mainUI->activateWindow();
    mainUI->raise();


    if( fileURL != "" ){


        mainUI->OpenDownUrlDlg(fileURL);

    }else{


    }

    //qDebug() << "ShowDownWindow " << fileURL;
}


