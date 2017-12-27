#ifndef NEWDOWN_H
#define NEWDOWN_H

#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
//#include <QLineEdit>
#include <ddialog.h>

class MainWindow;
#include "mainwindow.h"

class NewDown : public Dtk::Widget::DDialog
{
    Q_OBJECT
public:
    explicit NewDown( MainWindow *mainUI , QWidget *parent = nullptr);

    void SetDownloadEdit( QString urlStr );
    void ClearEdit();
private:

    MainWindow  *mainUI;
    QTextEdit   *Edit1;    
    QLabel      *msg;
    QString     GetThunderUrl(  QString thunder_url );
    int         dtype = 0;
    QString     dPath = "";

signals:



private slots:

    void Button1Click();
    int  Button2Click();
    void Button3Click();
    void openFileDlg();
    void buttonClicked(int index, const QString &text);
};

#endif // NEWDOWN_H
