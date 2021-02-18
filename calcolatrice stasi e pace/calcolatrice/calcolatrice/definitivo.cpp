#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "2_grado.h"
#include "BasicDegree.h"
#include <string>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;
int main()
{
    int scelta;
    float r, a, b, c, D, R, G, P, S, g, p, s;

    std::system("cls");
    std::cout << "::::::::::::::::::::::::::::::::::::" << endl;
    std::cout << ":  sviluppato  by  pace e  stasi   :" << endl;
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
            std::cout << "11) uscire " << endl;
            std::cout << "" << endl;
            std::cout << "" << endl;

            std::cin >> scelta;
            if (scelta < 0 || scelta>11)
            {
                std::cout << "Inserire un valore compreso tra 0 e 10" << endl;
                std::cout << "" << endl;
            }
        } while (scelta < 0 || scelta>10);
        switch (scelta)
        {
            //inizio casi
        case 0: //colori 
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
            break;
        case 1: //addizione
            std::cout << "Immettere primo numero:" << endl;
            std::cin >> a;
            std::cout << "Immettere secondo numero:" << endl;
            std::cin >> b;
            r = a + b;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
            std::cout << "" << endl;
            break;
        case 2: //sottrazione
            std::cout << "Immettere primo numero:" << endl;
            std::cin >> a;
            std::cout << "Immettere secondo numero:" << endl;
            std::cin >> b;
            r = a - b;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
            std::cout << "" << endl;
            break;
        case 3: //moltiplicazione
            std::cout << "Immettere primo numero:" << endl;
            std::cin >> a;
            std::cout << "Immettere secondo numero:" << endl;
            std::cin >> b;
            r = a * b;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione  e':" << r << endl;
            std::cout << "" << endl;
            break;
        case 4: //divisione
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
        case 5: //radice quadrata
            std::cout << "Immettere numero:" << endl;
            std::cin >> a;
            r = sqrt(a);
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione  e':" << r << endl;
            std::cout << "" << endl;
            break;
        case 6: //esponenti
            std::cout << "Immettere base:" << endl;
            std::cin >> a;
            std::cout << "Immettere esponente:" << endl;
            std::cin >> b;
            r = pow(a, b);
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
            break;
        case 7: //percentuale
            std::cout << "Immettere valore iniziale:" << endl;
            std::cin >> a;
            std::cout << "Immettere percentuale:" << endl;
            std::cin >> b;
            r = (a * b) / 100;
            std::system("cls");
            std::cout << "Il risultato dell'ultima operazione e':" << r << endl;
            break;
        case 8: //media
        { 
            
            double media;
            int i = 0;
            double x = 0;
            double sum = 0;
            std::string line;

            do
            {
                x = 0;
                std::cout << "Prossimo numero : ";
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
            break;
        }
        case 9: //formula quadratica
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

            break;
        case 10: //operazioni gradi
            string x;
            std::cout << "primo valore" << endl;
            std::cout <<"gradi: ";
            std::cin >> G;
            std::cout << ("primi: ");
            std::cin >> P;
            std::cout <<("secondi: ");
            std::cin >> S;
            cout << "operazione" << endl;
            cin >> x;
            std::cout << "secondo valore" << endl;
            std::cout <<("gradi: ");
            std::cin >> g;
            std::cout <<("primi: ");
            std::cin >> p;
            std::cout <<("secondi: ");
            std::cin >> s;
            if(x ==(string) "+"){
                BasicDegree bella(G, P, S);
                BasicDegree ciao = bella + BasicDegree(g, p, s);
                ciao.print();
            }else if(x == (string)"-"){
                BasicDegree bella(G, P, S);
                BasicDegree ciao = bella - BasicDegree(g, p, s);
                ciao.print();
            }else{
                std::cout << "inserire un valore valido" << endl;
            }
       
        }
    } while (scelta >= 0 && scelta <= 10);

    return 0;
}