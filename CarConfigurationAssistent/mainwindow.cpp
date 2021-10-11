#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->SavedConfig->hide();

    if(ui->SItzBezugAuswahl->currentIndex()== 0 ||  ui->FarbAuswahl->currentIndex()== 0|| ui->ZierelementAuswahl->currentIndex()== 0 || ui->FelgenAuswahl->currentIndex()== 0){
        ui->KonfigurationSpeichern->setDisabled(true);
    }else{
        ui->KonfigurationSpeichern->setDisabled(false);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief Function to change price by checking box "Sitzkomfort Paket"
 * @param checked user checked box
 */

void MainWindow::on_SitzkomfortPaketCheckbox_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=550;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=550;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price by checking box "Spiegel Paket"
 * @param checked user checked box
 */
void MainWindow::on_SpiegelPaketCheckbox_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=250;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=250;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price by checking box "Spur Paket"
 * @param checked user checked box
 */
void MainWindow::on_SpurPaketCheckbox_2_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=1250;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=1250;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price by checking box "Fahr Assistenz Paket"
 * @param checked user checked box
 */
void MainWindow::on_FahrAssistenzPaketCheckbox_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=1250;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=1250;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price and rate of consumption by checking box "Diesel"
 * @param checked user checked box
 */
void MainWindow::on_Diesel_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=2250;
        ui->Preis2->display(i);
        ui->VerbrauchINT->display(ui->VerbrauchINT->value()-1.2);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=2250;
        ui->Preis2->display(i);
         ui->VerbrauchINT->display(ui->VerbrauchINT->value()+1.2);
    }
}
/**
 * @brief Function to change price and rate of consumption by checking box "Hybrid"
 * @param checked user checked box
 */
void MainWindow::on_Hybrid_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=4250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q -= 2.5;
        ui->VerbrauchINT->display(q);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=4250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q += 2.5;
        ui->VerbrauchINT->display(q);
    }
}
/**
 * @brief Function to change price, iff true "Verbrauch pro 100km" changes to "Reichweite in km" since it is electric.
 * @param checked user checked box
 */
void MainWindow::on_Elektro_toggled(bool checked)
{
    if(checked == true){
         ui->Verbrauch->setText("Reichweite in km");
         double q = ui->VerbrauchINT->value();
         q *= 35;
         ui->VerbrauchINT->display(q);

        int i = ui->Preis2->value();
        i+=7250;
        ui->Preis2->display(i);
    }else if(checked == false){
        ui->Verbrauch->setText("Verbrauch pro 100km");
        double q = ui->VerbrauchINT->value();
        q /= 35;

        ui->VerbrauchINT->display(q);
        int i = ui->Preis2->value();
        i-=7250;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price and rate of consumption by checking box "GTronic"
 * @param checked user checked box
 */
void MainWindow::on_GTronic_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=2250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q += 1.3;
        ui->VerbrauchINT->display(q);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=2250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q -= 1.3;
        ui->VerbrauchINT->display(q);
    }
}
/**
 * @brief Function to change price and rate of consumption by checking box "Automatikgetriebe"
 * @param checked user checked box
 */
void MainWindow::on_Automatikgetriebe_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=5250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q -= 0.3;
        ui->VerbrauchINT->display(q);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=5250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q += 0.3;
        ui->VerbrauchINT->display(q);
    }
}
/**
 * @brief Function to change price and rate of consumption by checking box "115KW"
 * @param checked user checked box
 */
void MainWindow::on_HundertfuenfzehnKW_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=1250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q += 3.3;
        ui->VerbrauchINT->display(q);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=1250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q -= 3.3;
        ui->VerbrauchINT->display(q);
    }
}
/**
 * @brief Function to change price and rate of consumption by checking box "118KW"
 * @param checked user checked box
 */
void MainWindow::on_HunderatchtzehKW_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=2250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q += 3.5;
        ui->VerbrauchINT->display(q);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=2250;
        ui->Preis2->display(i);

        double q = ui->VerbrauchINT->value();
        q -= 3.5;
        ui->VerbrauchINT->display(q);
    }
}
/**
 * @brief Function to change price by checking box "Winterreifen"
 * @param checked user checked box
 */
void MainWindow::on_Winterreifen_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=350;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=350;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price by checking box "Anhaengerkuplung"
 * @param checked user checked box
 */
void MainWindow::on_Anhaengerkupplung_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=250;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=250;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price by checking box "Sitzheitzung"
 * @param checked user checked box
 */
void MainWindow::on_Sitzheizung_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=250;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=250;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to change price by checking box "AblagePaket"
 * @param checked user checked box
 */
void MainWindow::on_checkBox_toggled(bool checked)
{
    if(checked == true){
        int i = ui->Preis2->value();
        i+=50;
        ui->Preis2->display(i);
    }else if(checked == false){
        int i = ui->Preis2->value();
        i-=50;
        ui->Preis2->display(i);
    }
}
/**
 * @brief Function to safe configuration by clicking on "Safe Configuration"
 */
void MainWindow::on_KonfigurationSpeichern_triggered()
{
    ui->ConfigKosten->display(ui->Preis2->value());
    ui->Datum->setDate(QDate::currentDate());
}

/**
 * @brief Function to change price by choosing "FarbAuswahl"
 * @param index color chosen by user
 */
void MainWindow::on_FarbAuswahl_currentIndexChanged(int index)
{
    if(ui->SItzBezugAuswahl->currentIndex()== 0 ||  ui->FarbAuswahl->currentIndex()== 0|| ui->ZierelementAuswahl->currentIndex()== 0 || ui->FelgenAuswahl->currentIndex()== 0){
        ui->KonfigurationSpeichern->setDisabled(true);
    }else{
        ui->KonfigurationSpeichern->setDisabled(false);
    }
}

/**
 * @brief Function to change price by choosing "FelgenAuswahl"
 * @param index rims chosen by user
 */
void MainWindow::on_FelgenAuswahl_currentIndexChanged(int index)
{
    if(ui->SItzBezugAuswahl->currentIndex()== 0 ||  ui->FarbAuswahl->currentIndex()== 0|| ui->ZierelementAuswahl->currentIndex()== 0 || ui->FelgenAuswahl->currentIndex()== 0){
        ui->KonfigurationSpeichern->setDisabled(true);
    }else{
        ui->KonfigurationSpeichern->setDisabled(false);
    }
}
/**
 * @brief Function to change price by choosing "SitzbezugAuswahl"
 * @param index "Sitzbezug" chosen by user
 */
void MainWindow::on_SItzBezugAuswahl_currentIndexChanged(int index)
{
    if(ui->SItzBezugAuswahl->currentIndex()== 0 ||  ui->FarbAuswahl->currentIndex()== 0|| ui->ZierelementAuswahl->currentIndex()== 0 || ui->FelgenAuswahl->currentIndex()== 0){
        ui->KonfigurationSpeichern->setDisabled(true);
    }else{
        ui->KonfigurationSpeichern->setDisabled(false);
    }
}
/**
 * @brief Function to change price by choosing "ZierelementAuswahl"
 * @param index rim design chosen by user
 */
void MainWindow::on_ZierelementAuswahl_currentIndexChanged(int index)
{
    if(ui->SItzBezugAuswahl->currentIndex()== 0 ||  ui->FarbAuswahl->currentIndex()== 0|| ui->ZierelementAuswahl->currentIndex()== 0 || ui->FelgenAuswahl->currentIndex()== 0){
        ui->KonfigurationSpeichern->setDisabled(true);
    }else{
        ui->KonfigurationSpeichern->setDisabled(false);
    }
}
