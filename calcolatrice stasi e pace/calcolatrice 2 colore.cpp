#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "2_grado.h"
using namespace std;
int main()
{   int scelta;
    float r,a,b,c,D,R;
    system("cls");
    cout<<"::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<":  sviluppatp  by  pace e  stasi   :"<<endl;
    cout<<"::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    do {
        do
        {   cout<<""<<endl;
            cout<<""<<endl;
        	cout<<"0)  colore;"          <<endl;
            cout<<"1)  Somma;"           <<endl;
            cout<<"2)  Sottrazione;"     <<endl;
            cout<<"3)  Prodotto;"        <<endl;
            cout<<"4)  Divisione;"       <<endl;
            cout<<"5)  Radice quadrta;"  <<endl;
            cout<<"6)  Potenza;"         <<endl;
            cout<<"7)  Percentuale;"     <<endl;
            cout<<"8)  Media;"           <<endl;
            cout<<"9)  formula quadatica"<<endl;
            cout<<"10) uscire "          <<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            
            cin>>scelta;
            if ( scelta<0 || scelta>10 )
            {cout<<"Inserire un valore compreso tra 1 e 10"<<endl;
                cout<<""<<endl;
            }
        }
        while( scelta<0 || scelta>10);
        switch (scelta)
        {
        //inizio casi
			case 0 : cout<<"::::::::::::::::::::: "<<endl;
			         cout<<":0) nero;           : "<<endl;
                     cout<<":1) blu;            : "<<endl;
                     cout<<":2) verde;          : "<<endl;
                     cout<<":3) verde acqua;    : "<<endl;
                     cout<<":4) bordeaux;       : "<<endl;
                     cout<<":5) viola;          : "<<endl;
                     cout<<":6) verde oliva;    : "<<endl;
                     cout<<":7) grigio chiaro;  : "<<endl; 
                     cout<<":8) grigio;         : "<<endl;
                     cout<<":9) blu;            : "<<endl;
                     cout<<"::::::::::::::::::::: "<<endl;
                     cout<<"immettere numero:"     <<endl;
                     cin >>a;
                     if (a=0){system("color 0f");
					 }else{system ("color 1f");
					 }
                     
				break;	 
            case 1 :
                cout<<"Immettere primo numero:"<<endl;
                cin>>a;
                cout<<"Immettere secondo numero:"<<endl;
                cin>>b;
                r=a+b;
                 system("cls");
                cout<<"Il risultato dell'ultima operazione e':"<<r<<endl;
                cout<<""<<endl;
                break;
            case 2 :
                cout<<"Immettere primo numero:"<<endl;
                cin>>a;
                cout<<"Immettere secondo numero:"<<endl;
                cin>>b;
                r=a-b;
                 system("cls");
                cout<<"Il risultato dell'ultima operazione e':"<<r<<endl;
                cout<<""<<endl;
                break;
            case 3 :
                cout<<"Immettere primo numero:"<<endl;
                cin>>a;
                cout<<"Immettere secondo numero:"<<endl;
                cin>>b;
                r=a*b;
                 system("cls");
                cout<<"Il risultato dell'ultima operazione  e':"<<r<<endl;
                cout<<""<<endl;
                break;
            case 4 :
                cout<<"Immettere primo numero:"<<endl;
                cin>>a;
                cout<<"Immettere secondo numero:"<<endl;
                cin>>b;
                if (b==0)
                { if (a==0)
                { system("cls");
				 cout<<"Indeterminato"<<endl;
                    cout<<""<<endl;
                }
                else
                { system("cls");
				 cout<<"Impossibile"<<endl;
                    cout<<""<<endl;
                    
                }
                }
                else
                {r=a/b;
				 system("cls");
                    cout<<"Il risultato dell'ultima operazione  e':"<<r<<endl;
                    cout<<""<<endl;
                }
            case 5 :
                cout<<"Immettere numero:"<<endl;
                cin>>a;
                r=sqrt(a);
                 system("cls");
                cout<<"Il risultato dell'ultima operazione  e':"<<r<<endl;
                cout<<""<<endl;
                break;
            case 6:
                cout<<"Immettere base:"<<endl;
                cin>>a;
                cout<<"Immettere esponente:"<<endl;
                cin>>b;
                r= pow (a,b);
                 system("cls");
                cout<<"Il risultato dell'ultima operazione è:"<<r<<endl;
                break;
            case 7:
                cout<<"Immettere valore iniziale:"<<endl;
                cin>>a;
                cout<<"Immettere percentuale:"<<endl;
                cin>>b;
                r= (a*b)/100;
                 system("cls");
                cout<<"Il risultato dell'ultima operazione:"<<r<<endl;
                break;
            case 8:
               { cout<<"Quanti numeri\? ";
                cin>>a;
                cout<<endl;
                double media;
                int i=0;
                while (i<a)
                {
                    int x;
                    cout<<"Prossimo numero : ";
                    cin>>x;
                    cout<<endl;
                    media += x;
                    i++;
                }
                media /= a;
                 system("cls");
                cout<<"La media e' "<<media<<endl;
                
                
			   }
                break;
            case 9: 
			   printf("coeficiente a: ");
               scanf("%f",&a);
               printf("coeficiente b: ");
               scanf("%f",&b);
               printf("coeficiente c: ");
               scanf("%f",&c);
                system("cls");
               if(a==0){
			   cout<<"equazione e impossibile"<<endl;
			   }else{
               Equazioni equazioni;
               equazioni.determinante(a,b,c);
               equazioni.soluzioni(a,b,c);
               
			   }
        
                break;
        }
    }
    while(scelta>= 0 && scelta <=9);
   
    return 0;
}


