#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "2_grado.h"
#include "BasicDegree.h"
using namespace std;
int main()
{
    int scelta;
    float r, a, b, c, D, R, G, P, S, g, p, s;

    system("cls");
    cout << "::::::::::::::::::::::::::::::::::::" << endl;
    cout << ":  sviluppato  by  pace e  stasi   :" << endl;
    cout << "::::::::::::::::::::::::::::::::::::" << endl;
    cout << "" << endl;
    cout << "" << endl;
    do {
        do
        {
            cout << "" << endl;
            cout << "" << endl;
            cout << "0)  colore sfondo;" << endl;
            cout << "1)  Somma;" << endl;
            cout << "2)  Sottrazione;" << endl;
            cout << "3)  Prodotto;" << endl;
            cout << "4)  Divisione;" << endl;
            cout << "5)  Radice quadrta;" << endl;
            cout << "6)  Potenza;" << endl;
            cout << "7)  Percentuale;" << endl;
            cout << "8)  Media;" << endl;
            cout << "9)  formula quadatica" << endl;
            cout << "10) operazioni gradi" << endl;
            cout << "11) uscire " << endl;
            cout << "" << endl;
            cout << "" << endl;

            cin >> scelta;
            if (scelta < 0 || scelta>11)
            {
                cout << "Inserire un valore compreso tra 0 e 10" << endl;
                cout << "" << endl;
            }
        } while (scelta < 0 || scelta>10);
        switch (scelta)
        {
            //inizio casi
        case 0: //colori 
            cout << "::::::::::::::::::::: " << endl;
            cout << ": 0) nero;          : " << endl;
            cout << ": 1) blu scuro;     : " << endl;
            cout << ": 2) verde;         : " << endl;
            cout << ": 3) verde acqua;   : " << endl;
            cout << ": 4) bordeaux;      : " << endl;
            cout << ": 5) viola;         : " << endl;
            cout << ": 6) verde oliva;   : " << endl;
            cout << ": 7) grigio chiaro; : " << endl;
            cout << ": 8) grigio;        : " << endl;
            cout << ": 9) blu;           : " << endl;
            cout << "::::::::::::::::::::: " << endl;
            cout << "immettere numero:" << endl;
            cin >> a;
            if (a == 0) {
                system("color 0f");
            }
            else {
                if (a == 1) {
                    system("color 1f");
                }
                else {
                    if (a == 2) {
                        system("color 2f");
                    }
                    else {
                        if (a == 3) {
                            system("color 3f");
                        }
                        else {
                            if (a == 4) {
                                system("color 4f");
                            }
                            else {
                                if (a == 5) {
                                    system("color 5f");
                                }
                                else {
                                    if (a == 6) {
                                        system("color 6f");
                                    }
                                    else {
                                        if (a == 7) {
                                            system("color 7f");
                                        }
                                        else {
                                            if (a == 8) {
                                                system("color 8f");
                                            }
                                            else {
                                                system("color 9f");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            system("cls");
            break;
        case 1: //addizione
            cout << "Immettere primo numero:" << endl;
            cin >> a;
            cout << "Immettere secondo numero:" << endl;
            cin >> b;
            r = a + b;
            system("cls");
            cout << "Il risultato dell'ultima operazione e':" << r << endl;
            cout << "" << endl;
            break;
        case 2: //sottrazione
            cout << "Immettere primo numero:" << endl;
            cin >> a;
            cout << "Immettere secondo numero:" << endl;
            cin >> b;
            r = a - b;
            system("cls");
            cout << "Il risultato dell'ultima operazione e':" << r << endl;
            cout << "" << endl;
            break;
        case 3: //moltiplicazione
            cout << "Immettere primo numero:" << endl;
            cin >> a;
            cout << "Immettere secondo numero:" << endl;
            cin >> b;
            r = a * b;
            system("cls");
            cout << "Il risultato dell'ultima operazione  e':" << r << endl;
            cout << "" << endl;
            break;
        case 4: //divisione
            cout << "Immettere primo numero:" << endl;
            cin >> a;
            cout << "Immettere secondo numero:" << endl;
            cin >> b;
            if (b == 0)
            {
                if (a == 0)
                {
                    system("cls");
                    cout << "Indeterminato" << endl;
                    cout << "" << endl;
                }
                else
                {
                    system("cls");
                    cout << "Impossibile" << endl;
                    cout << "" << endl;

                }
            }
            else
            {
                r = a / b;
                system("cls");
                cout << "Il risultato dell'ultima operazione  e':" << r << endl;
                cout << "" << endl;
            }
        case 5: //radice quadrata
            cout << "Immettere numero:" << endl;
            cin >> a;
            r = sqrt(a);
            system("cls");
            cout << "Il risultato dell'ultima operazione  e':" << r << endl;
            cout << "" << endl;
            break;
        case 6: //esponenti
            cout << "Immettere base:" << endl;
            cin >> a;
            cout << "Immettere esponente:" << endl;
            cin >> b;
            r = pow(a, b);
            system("cls");
            cout << "Il risultato dell'ultima operazione e':" << r << endl;
            break;
        case 7: //percentuale
            cout << "Immettere valore iniziale:" << endl;
            cin >> a;
            cout << "Immettere percentuale:" << endl;
            cin >> b;
            r = (a * b) / 100;
            system("cls");
            cout << "Il risultato dell'ultima operazione e':" << r << endl;
            break;
        case 8: //media
        { cout << "Quanti numeri\? ";
        cin >> a;
        cout << endl;
        double media;
        int i = 0;
        while (i < a)
        {
            int x;
            cout << "Prossimo numero : ";
            cin >> x;
            cout << endl;
            media += x;
            i++;
        }
        media /= a;
        system("cls");
        cout << "La media e' " << media << endl;


        }
        break;
        case 9: //formula quadratica
            printf("coeficiente a: ");
            scanf_s("%f", &a);
            printf("coeficiente b: ");
            scanf_s("%f", &b);
            printf("coeficiente c: ");
            scanf_s("%f", &c);
            system("cls");
            if (a == 0) {
                cout << "equazione e impossibile" << endl;
            }
            else {
                Equazioni equazioni;
                equazioni.determinante(a, b, c);
                equazioni.soluzioni(a, b, c);

            }

            break;
        case 10: //operazioni gradi
            /*cout << "primo valore" << endl;
            cout <<"gradi: ";
            cin >> G;
            printf("primi: ");
            cin >> P;
            printf("secondi: ");
            cin >> S;
            cout << "secondo valore" << endl;
            printf("gradi: ");
            cin >> g;
            printf("primi: ");
            cin >> p;;
            printf("secondi: ");
            cin >> s;*/
            BasicDegree bella(20, 30, 40);
            BasicDegree ciao = bella + BasicDegree(50, 40, 30);
            ciao.print();
        }
    } while (scelta >= 0 && scelta <= 10);

    return 0;
}



