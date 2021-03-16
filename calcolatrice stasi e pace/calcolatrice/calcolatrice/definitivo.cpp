#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "2_grado.h"
#include "BasicDegree.h"
#include <string>
#include <vector>
#define _USE_MATH_DEFINES
#include <cmath> 
#include <thread>
#include <chrono>

using namespace std;
int main()
{
    int scelta;
    float r, a, b, c, D, R, G, P, S, g, p, s;

    std::system("cls");
    std::cout << "::::::::::::::::::::::::::::::::::::" << endl;
    std::cout << ":  sviluppato  by  pace e stasi    :" << endl;
    std::cout << "::::::::::::::::::::::::::::::::::::" << endl;
    std::cout << "" << endl;
    std::cout << "" << endl;
    do {
        do
        {
            std::cout << "" << endl;
            std::cout << "" << endl;
            std::cout << "0)  colore sfondo;" << endl;
            std::cout << "1)  Somma;" << endl;
            std::cout << "2)  Sottrazione;" << endl;
            std::cout << "3)  Prodotto;" << endl;
            std::cout << "4)  Divisione;" << endl;
            std::cout << "5)  Radice quadrta;" << endl;
            std::cout << "6)  Potenza;" << endl;
            std::cout << "7)  Percentuale;" << endl;
            std::cout << "8)  Media;" << endl;
            std::cout << "9)  formula quadatica" << endl;
            std::cout << "10) operazioni gradi" << endl;
            std::cout << "11) funzioni gonimetriche" << endl;
            std::cout << "12) problemi del vento" << endl;
            std::cout << "13) uscire " << endl;
            std::cout << "" << endl;
            std::cout << "" << endl;

            std::cin >> scelta;
            if (scelta < 0 || scelta>13)
            {
                std::cout << "Inserire un valore compreso tra 0 e 12 \a" << endl;
                std::cout << "" << endl;
            }
        } while (scelta < 0 || scelta>12);
        switch (scelta)
        {//inizio casi
            
            //colori ↓
        case 0:{  
            int a;
            do
            {
                do
                {


                    std::cout << "::::::::::::::::::::: " << endl;
                    std::cout << ": 0) nero;          : " << endl;
                    std::cout << ": 1) blu scuro;     : " << endl;
                    std::cout << ": 2) verde;         : " << endl;
                    std::cout << ": 3) turchese;      : " << endl;
                    std::cout << ": 4) rosso;         : " << endl;
                    std::cout << ": 5) viola;         : " << endl;
                    std::cout << ": 6) ocra;          : " << endl;
                    std::cout << ": 7) grigio chiaro; : " << endl;
                    std::cout << ": 8) grigio;        : " << endl;
                    std::cout << ": 9) azzurro;       : " << endl;
                    std::cout << ": 10) esci;         : " << endl;
                    std::cout << "::::::::::::::::::::: " << endl;
                    std::cout << "immettere numero:" << endl;
                    std::cin >> a;
                    if (a < 0 || a >10)
                    {
                        std::cout << "Inserire un valore compreso tra 0 e 10" << endl;
                        std::cout << "" << endl;
                    }
                } while (a < 0 || a>10);
                switch (a)
                {
                case 0: std::system("color 0f");
                    break;
                case 1: std::system("color 1f");
                    break;
                case 2: std::system("color 2f");
                    break;
                case 3: std::system("color 3f");
                    break;
                case 4: std::system("color 4f");
                    break;
                case 5: std::system("color 5f");
                    break;
                case 6: std::system("color 6f");
                    break;
                case 7: std::system("color 7f");
                    break;
                case 8: std::system("color 8f");
                    break;
                case 9: std::system("color 9f");
                    break;
                }
            } while (a > -1 && a < 10);



            std::system("cls");
        }break;
            //addizione ↓
        case 1:{  
            std::cout << "Immettere primo numero:" << endl;
            std::cin >> a;
            std::cout << "Immettere secondo numero:" << endl;
            std::cin >> b;
            r = a + b;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
            std::cout << "" << endl;
        }break;
            //sottrazione ↓
        case 2:{  
            std::cout << "Immettere primo numero:" << endl;
            std::cin >> a;
            std::cout << "Immettere secondo numero:" << endl;
            std::cin >> b;
            r = a - b;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
            std::cout << "" << endl;
        }break;
            //moltiplicazione ↓
        case 3:{  
            std::cout << "Immettere primo numero:" << endl;
            std::cin >> a;
            std::cout << "Immettere secondo numero:" << endl;
            std::cin >> b;
            r = a * b;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione  e':" << r << endl;
            std::cout << "" << endl;
        }break;
            //divisione ↓
        case 4:{  
            std::cout << "Immettere primo numero:" << endl;
            std::cin >> a;
            std::cout << "Immettere secondo numero:" << endl;
            std::cin >> b;
            if (b == 0)
            {
                if (a == 0)
                {
                    std::system("cls");
                    std::cout << "Indeterminato" << endl;
                    std::cout << "" << endl;
                }
                else
                {
                    std::system("cls");
                    std::cout << "Impossibile" << endl;
                    std::cout << "" << endl;

                }
            }
            else
            {
                r = a / b;
                std::system("cls");
                std::cout << "Il risultato dell'ultima operazione  e':" << r << endl;
                std::cout << "" << endl;
            }
        }break;
            //radice quadrata ↓
        case 5:{  
            std::cout << "Immettere numero:" << endl;
            std::cin >> a;
            r = sqrt(a);
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione  e':" << r << endl;
            std::cout << "" << endl;
        }break;
            //esponenti ↓
        case 6:{  
            std::cout << "Immettere base:" << endl;
            std::cin >> a;
            std::cout << "Immettere esponente:" << endl;
            std::cin >> b;
            r = pow(a, b);
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
        }break;
            //percentuale ↓
        case 7: {  
            std::cout << "Immettere valore iniziale:" << endl;
            std::cin >> a;
            std::cout << "Immettere percentuale:" << endl;
            std::cin >> b;
            r = (a * b) / 100;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
        }break;
            //media ↓
        case 8: {  


            double media;
            int i = 0;
            double x = 0;
            double sum = 0;
            std::string line;

            do
            {
                x = 0;
                std::cout << "Prossimo numero : ";
                std::cin.ignore(100, '\n');
                getline(std::cin, line);
                cin.ignore(100, '\n');
                std::getline(std::cin, line);
                if (line != "") {
                    x = stod(line);
                    std::cin >> x;
                    std::cout << endl;
                    sum += x;
                    i++;
                }
            } while (line != "");

            media = sum / i;
            std::system("cls");
            std::cout << "La media e' " << media << endl;

        }break;
            //formula quadratica ↓
        case 9: {  
            std::printf("coeficiente a: ");
            scanf_s("%f", &a);
            std::printf("coeficiente b: ");
            scanf_s("%f", &b);
            std::printf("coeficiente c: ");
            scanf_s("%f", &c);
            std::system("cls");
            if (a == 0) {
                std::cout << "equazione e impossibile" << endl;
            }
            else {
                Equazioni equazioni;
                equazioni.determinante(a, b, c);
                equazioni.soluzioni(a, b, c);

            }

        }break;
            //operazioni gradi ↓ 
        case 10: {  
            std::string x;
            std::cout << "primo valore" << endl;
            std::cout << "gradi: ";
            std::cin >> G;
            std::cout << ("primi: ");
            std::cin >> P;
            std::cout << ("secondi: ");
            std::cin >> S;
            std::cout << "operazione" << endl;
            std::cin >> x;
            std::cout << "secondo valore" << endl;
            std::cout << ("gradi: ");
            std::cin >> g;
            std::cout << ("primi: ");
            std::cin >> p;
            std::cout << ("secondi: ");
            std::cin >> s;
            if (x == (std::string)"+") {
                BasicDegree bella(G, P, S);
                BasicDegree ciao = bella + BasicDegree(g, p, s);
                ciao.print();
            }
            else if (x == (std::string)"-") {
                BasicDegree bella(G, P, S);
                BasicDegree ciao = bella - BasicDegree(g, p, s);
                ciao.print();
            }
            else {
                std::cout << "inserire un valore valido" << endl;
            }
        }break;
            //funzioni goniometriche ↓
        case 11:{
            double gtr = 0.017453292;
            double S, C, T, sec, csc, cot;
            double gradi;
            double rad;
            std::cout << "inserire un valore in gradi" << endl;
            std::cin >> gradi;
            rad = gradi * gtr;
            S = sin(rad);
            C = cos(rad);
            T = tan(rad);
            sec = 1 / C;
            csc = 1 / S;
            cot = 1 / T;
            std::cout << "seno=" << S << endl;
            std::cout << "coseno=" << C << endl;
            std::cout << "tangente=" << T << endl;
            std::cout << "secante=" << sec << endl;
            std::cout << "cosecante=" << csc << endl;
            std::cout << "cotangente=" << cot << endl;
            std::cout << rad << endl;
        }break;
            //problemi del vento ↓
        case 12:
            int tipo;
            double gtr = 0.017453292;
            double rtg = 57.29577951;
            double TC, TAS, Wa, Wv, GS, TH, αr, δr, wca, αg, δg;
            

            std::cout << "1° problema del vento" << endl;
            std::cout << "2° problema del vento" << endl;
            std::cout << "3° problema del vento" << endl;
            std::cout << "4° problema del vento" << endl;
            std::cin >> tipo;
            if (tipo < 0 || tipo>4){//inizio condizione
                std::cout << "inserisci un valore valido" << endl;
            }else{
            switch (tipo) {
                //problema 1
            case 1:{
                //dichiarazione dati
                std::cout << "primo problema del vento" << endl;
                std::cout << "true course (TC)" << endl;
                std::cin >> TC;
                std::cout << "true air speed (TAS)" << endl;
                std::cin >> TAS;
                std::cout << "wind angle (Wa)" << endl;
                std::cin >> Wa;
                std::cout << "wind velocity (Wv)" << endl;
                std::cin >> Wv;
                //inizio formule
                //sfalzo il vento
                if (Wa <= 180) {
                    Wa += 180;
                }
                else {
                    Wa -= 180;
                }
                //calcolo α
                if (Wa < TC) {
                    αg = TC - Wa;
                }
                else {
                    αg = Wa - TC;
                };
                if (αg > 180) {
                    αg -= 360;
                }
                //trovo wca
                αr = αg * gtr;
                αr = sin(αr);
                wca = (αr * Wv) / TAS;
                wca = asin(wca);
                wca = wca * rtg;//trovo wca in gradi
                int wcas = int(wca);//semolifico wca
                δg = 180 - αg - wcas;//trovo gamma
                δr = δg * gtr;
                δr = sin(δr);
                GS = (TAS * δr) / αr;//trovo GS
                int GSs = int(GS);//semplifico GS
                if (Wa > TC) {
                    TH = TC - wcas;
                }
                else if (Wa < TC) {
                    TH = TC + wcas;
                }
                else {
                    TH = TC;
                };//trovo TH
                std::cout << "" << endl;
                std::cout << "GS=" << GSs << endl;
                std::cout << "TH=" << TH << endl;
                std::cout << "wca=" << wcas << endl;
                std::cout << "gamma=" << δg << endl;
                std::cout << "alfa=" << αg << endl;
            }break;//fine problema 1
                //problema 2
            case 2: {
                int Wao;
                //dichiarazione dati
                std::cout << "secondo problema del vento" << endl;
                std::cout << "true heding (TH)" << endl;
                std::cin >> TH;
                std::cout << "true air speed (TAS)" << endl;
                std::cin >> TAS;
                std::cout << "wind angle (Wa)" << endl;
                std::cin >> Wao;
                std::cout << "wind velocity (Wv)" << endl;
                std::cin >> Wv;
                //inizio formule
                //sfalzo il vento
                if (Wao <= 180) {
                    Wa = Wao + 180;
                }
                else {
                    Wa = Wao - 180;
                }
                //trovare gamma
                if (Wao > TH){
                    δg = Wao - TH;
                }else{
                    δg = TH - Wao;
                }
                if (δg > 180) {
                    δg = δg -360;
                };
                δr = δg * gtr;
                double δc;
                double δs;
                δc = cos(δr);//coseno di gamma
                GS = sqrt((pow(Wv,2)) + (pow(TAS,2)) - (2 * Wv * TAS * δc));
                (int)floor(GS + 0.5);
                δs = sin(δr);//seno di gamma
                wca = (Wv * δs) / GS;
                wca = asin(wca);//trovo wca
                (int) floor(wca + 0.5);
                αg = 180 - wca - δg;
                if (Wa > TH) {
                    TC = TH - wca;
                }
                else if (Wa < TH) {
                    TC = TH + wca;
                }
                else {
                    TC = TH;
                };
                std::cout << "" << endl;
                std::cout << "GS=" << GS << endl;
                std::cout << "TC=" << TC << endl;
                std::cout << "wca=" << wca << endl;
                std::cout << "gamma=" << δg << endl;
                std::cout << "alfa=" << αg << endl;

            }break;//fine secondo problema
            }//fine casi
            while (true);
            }//fine condizione
        } while (scelta >= 0 && scelta <= 12);

        return 0;
    } while (true);
}