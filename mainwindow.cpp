#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <fstream>
#include "Dron.hpp"
#include "PojazdyLadowe.hpp"

using namespace std;
vector<Pojazdy *> wektor;
Pojazdy *wsk = NULL;

void przedstawsie(Pojazdy *wsk);
int iloscSilnikow(Pojazdy *wsk);
void puszuj(Pojazdy *wsk);
void dodaj();
void przedstaw();
void ustaw_wage(Pojazdy *wsk, int wprowadzone);
void ustaw_stan(Pojazdy *wsk, bool wprowadz);
std::string nazwij(Pojazdy *wsk);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    for (vector<Pojazdy *>::iterator pObj = wektor.begin();
                         pObj != wektor.end(); ++pObj) {
                        delete *pObj;
                    }
                    wektor.clear();
    ui->lista->clear();
}

void MainWindow::on_pushButton_clicked()
{
    Pojazdy *wsk1 = NULL;
    wsk1 = new Pojazdy;
    wektor.push_back(wsk1);
    if(wektor.size()!=0)
                    {
                        ui->lista->clear();
                        for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
                        {
                            const QString nazwa = QString::fromStdString(nazwij(*pObj));
                            QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/pojazd.png"),"nazwa");
                            if(nazwij(*pObj) == "Jestem z klasy Pojazdy")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazd.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyLadowe")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdladowy.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyPowietrzne")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdpowietrzny.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy Dron")
                            {
                                const QIcon ikona = QIcon(":/rec/dron.png");
                                item->setIcon(ikona);
                            }
                            item->setText(nazwa);
                            ui->lista->addItem(item);
                        }
                     }
}

void MainWindow::on_pushButton_8_clicked()
{
    Pojazdy *wsk2 = NULL;
    wsk2 = new PojazdyLadowe;
    wektor.push_back(wsk2);
    if(wektor.size()!=0)
                    {
                        ui->lista->clear();
                        for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
                        {
                            const QString nazwa = QString::fromStdString(nazwij(*pObj));
                            QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/pojazd.png"),"nazwa");
                            if(nazwij(*pObj) == "Jestem z klasy Pojazdy")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazd.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyLadowe")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdladowy.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyPowietrzne")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdpowietrzny.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy Dron")
                            {
                                const QIcon ikona = QIcon(":/rec/dron.png");
                                item->setIcon(ikona);
                            }
                            item->setText(nazwa);
                            ui->lista->addItem(item);
                        }
                     }
}

void MainWindow::on_pushButton_9_clicked()
{
    Pojazdy *wsk3 = NULL;
    wsk3 = new PojazdyPowietrzne;
    wektor.push_back(wsk3);
    if(wektor.size()!=0)
                    {
                        ui->lista->clear();
                        for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
                        {
                            const QString nazwa = QString::fromStdString(nazwij(*pObj));
                            QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/pojazd.png"),"nazwa");
                            if(nazwij(*pObj) == "Jestem z klasy Pojazdy")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazd.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyLadowe")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdladowy.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyPowietrzne")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdpowietrzny.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy Dron")
                            {
                                const QIcon ikona = QIcon(":/rec/dron.png");
                                item->setIcon(ikona);
                            }
                            item->setText(nazwa);
                            ui->lista->addItem(item);
                        }
                     }
}

void MainWindow::on_pushButton_10_clicked()
{
    Pojazdy *wsk4 = NULL;
    wsk4 = new Dron;
    wektor.push_back(wsk4);
    if(wektor.size()!=0)
                    {
                        ui->lista->clear();
                        for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
                        {
                            const QString nazwa = QString::fromStdString(nazwij(*pObj));
                            QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/pojazd.png"),"nazwa");
                            if(nazwij(*pObj) == "Jestem z klasy Pojazdy")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazd.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyLadowe")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdladowy.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy PojazdyPowietrzne")
                            {
                                const QIcon ikona = QIcon(":/rec/pojazdpowietrzny.png");
                                item->setIcon(ikona);
                            }
                            else if(nazwij(*pObj) == "Jestem z klasy Dron")
                            {
                                const QIcon ikona = QIcon(":/rec/dron.png");
                                item->setIcon(ikona);
                            }
                            item->setText(nazwa);
                            ui->lista->addItem(item);
                        }
                     }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(wektor.size()>0)
    {
    delete *(wektor.end()-1);
    wektor.erase(wektor.end()-1);

    ui->lista->clear();
    for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
    {
        const QString nazwa = QString::fromStdString(nazwij(*pObj));
        QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/pojazd.png"),"nazwa");
        if(nazwij(*pObj) == "Jestem z klasy Pojazdy")
        {
            const QIcon ikona = QIcon(":/rec/pojazd.png");
            item->setIcon(ikona);
        }
        else if(nazwij(*pObj) == "Jestem z klasy PojazdyLadowe")
        {
            const QIcon ikona = QIcon(":/rec/pojazdladowy.png");
            item->setIcon(ikona);
        }
        else if(nazwij(*pObj) == "Jestem z klasy PojazdyPowietrzne")
        {
            const QIcon ikona = QIcon(":/rec/pojazdpowietrzny.png");
            item->setIcon(ikona);
        }
        else if(nazwij(*pObj) == "Jestem z klasy Dron")
        {
            const QIcon ikona = QIcon(":/rec/dron.png");
            item->setIcon(ikona);
        }
        item->setText(nazwa);
        ui->lista->addItem(item);
    }

    }
    else {
        cout<<"Blad"<<endl;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(wektor.size()>0)
                    {
                        ofstream file;
                        file.open("plik.txt");

                        if(file.is_open())
                        {
                            cout<<"Plik otwarto poprawnie"<<endl;

                                for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
                                {
                                    file << (*(*pObj)).wypiszsie() <<"\n";
                                    file << *(*pObj) <<endl<<endl;
                                }
                                file.close();
                        }
                        if(wektor.size()!=0)
                                        {
                                            ui->lista->clear();
                                            for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
                                            {
                                                const QString nazwa = QString::fromStdString(nazwij(*pObj));
                                                QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/pojazd.png"),"nazwa");
                                                if(nazwij(*pObj) == "Jestem z klasy Pojazdy")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/pojazd.png");
                                                    item->setIcon(ikona);
                                                }
                                                else if(nazwij(*pObj) == "Jestem z klasy PojazdyLadowe")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/pojazdladowy.png");
                                                    item->setIcon(ikona);
                                                }
                                                else if(nazwij(*pObj) == "Jestem z klasy PojazdyPowietrzne")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/pojazdpowietrzny.png");
                                                    item->setIcon(ikona);
                                                }
                                                else if(nazwij(*pObj) == "Jestem z klasy Dron")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/dron.png");
                                                    item->setIcon(ikona);
                                                }
                                                item->setText(nazwa);
                                                ui->lista->addItem(item);
                                            }
                                         }
                     }
    else {
        cout<<"Blad"<<endl;
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    for (vector<Pojazdy *>::iterator pObj = wektor.begin();
                         pObj != wektor.end(); ++pObj) {
                        delete *pObj;
                    }
                    wektor.clear();

                        string str;
                        ifstream file;
                        file.open("plik.txt");

                        if(file.is_open())
                        {
                            while (!file.eof())
                            {
                                getline(file, str);
                                if(str == "Jestem z klasy Pojazdy")
                                {
                                    Pojazdy *wsk1 = new Pojazdy;
                                    file >> *wsk1;
                                    wektor.push_back(wsk1);
                                }
                                else if(str == "Jestem z klasy PojazdyLadowe")
                                {
                                    Pojazdy *wsk2 = new PojazdyLadowe;
                                    file >> *wsk2;
                                    wektor.push_back(wsk2);
                                }
                                else if(str == "Jestem z klasy PojazdyPowietrzne")
                                {
                                    Pojazdy *wsk3 = new PojazdyPowietrzne;
                                    file >> *wsk3;
                                    wektor.push_back(wsk3);
                                }
                                else if(str == "Jestem z klasy Dron")
                                {
                                    Pojazdy *wsk4 = new Dron;
                                    file >> *wsk4;
                                    wektor.push_back(wsk4);
                                }
                            }
                        }
                        if(wektor.size()!=0)
                                        {
                                            ui->lista->clear();
                                            for (vector<Pojazdy *>::iterator pObj = wektor.begin();pObj != wektor.end(); ++pObj)
                                            {
                                                const QString nazwa = QString::fromStdString(nazwij(*pObj));
                                                QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/pojazd.png"),"nazwa");
                                                if(nazwij(*pObj) == "Jestem z klasy Pojazdy")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/pojazd.png");
                                                    item->setIcon(ikona);
                                                }
                                                else if(nazwij(*pObj) == "Jestem z klasy PojazdyLadowe")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/pojazdladowy.png");
                                                    item->setIcon(ikona);
                                                }
                                                else if(nazwij(*pObj) == "Jestem z klasy PojazdyPowietrzne")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/pojazdpowietrzny.png");
                                                    item->setIcon(ikona);
                                                }
                                                else if(nazwij(*pObj) == "Jestem z klasy Dron")
                                                {
                                                    const QIcon ikona = QIcon(":/rec/dron.png");
                                                    item->setIcon(ikona);
                                                }
                                                item->setText(nazwa);
                                                ui->lista->addItem(item);
                                            }
                                         }
}

std::string nazwij(Pojazdy *wsk)
{
    return wsk->wypiszsie();
}

