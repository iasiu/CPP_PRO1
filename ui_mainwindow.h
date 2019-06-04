/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QListWidget *lista;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 30, 801, 20));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 60, 371, 32));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 150, 371, 32));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 180, 371, 32));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 210, 371, 32));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 80, 371, 32));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(210, 100, 371, 32));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(210, 120, 371, 32));
        lista = new QListWidget(centralWidget);
        lista->setObjectName(QString::fromUtf8("lista"));
        lista->setGeometry(QRect(10, 240, 781, 351));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Witaj, w projekcie 3-im Jana Lewandowskiego z PROE", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Dodaj pojazd", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Usun z wektora wskaznikow na klas\304\231 Pojazd ostatni wpis", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Zapisz wszystko do pliku", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Wczytaj z pliku wszystko", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Dodaj pojazd l\304\205dowy", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Dodaj pojazd powietrzny", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "Dodaj drona", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
