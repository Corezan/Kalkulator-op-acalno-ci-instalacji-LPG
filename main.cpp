#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

double LPG; //koszt litra gazu
double Benzyna; //koszt litra benzyny
double Przebieg; //roczny w kilometrch
double Instalacja; //jednorazowy koszt instalacji
double Spalanie; //w litrach na 100km

double Koszt_benzyny; //koszty benzyny w okreœlonym czasie
double Koszt_lpg; // koszty gazu w okreslonym czasie
double Suma_lpg; // Koszty gazu i instalacji w okreœlonym czasie
double Przebieg_msc; // Przebieg na msc wyliczony z deklarowanego przebiegu rocznego
int i;

int main()
{
    cout << "Wprowadz cene instalacji LPG:" << endl;
    cin >> Instalacja;
    cout << "Wprowadz aktualna cene benzyny za litr:"<< endl;
    cin >> Benzyna;
    cout << "Wprowadz aktualna cene gazu:"<<endl;
    cin>> LPG;
    cout << "Wprowadz prognozowany roczny przebieg (w kilometrach):"<< endl;
    cin >> Przebieg;
    cout << "Wprowadz przecietne spalanie na 100km (podaj tylko ilosc litrow):"<<endl;
    cin >> Spalanie;

    system("cls");
    Sleep(500);

    cout<< "WPROWADZONO NASTEPUJACE DANE:"<< endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"--------------------------------------------"<< endl;
    cout<< "Cena 1 litra gazu: "<< LPG<< " zl."<<endl<<endl;
    cout<< "Cena 1 litra benzyny: "<< Benzyna<< " zl."<<endl<<endl;
    cout<< "Koszt instalacji LPG: " <<Instalacja<< " zl."<< endl<<endl;
    cout<< "Prognozowany roczny przebieg: "<< Przebieg<< " km."<<endl<<endl;
    cout<< "Przecietne spalanie: "<< Spalanie<<"/100 km."<< endl<< endl;
    cout<<"--------------------------------------------"<< endl;

    Koszt_benzyny= (Benzyna*Przebieg*Spalanie)/100;
    Koszt_lpg= (LPG*Przebieg*Spalanie)/100;
    Suma_lpg= Koszt_lpg+ Instalacja;
    Przebieg_msc= Przebieg/12;

    cout<< endl<<endl;

    cout<<"Przy prognozowanym rocznym przebiegu na poziomie "<<Przebieg<<" kilometrow roczne wydatki poniesione na benzyne wyniosa: " <<  Koszt_benzyny <<"zl"<< endl<<endl;
    cout<<"W tym samym czasie wydatki poniesione na gaz wyniosa: "<< Koszt_lpg<< "zl, a uwzgledniajac koszty instalacji: "<< Suma_lpg <<" zl"<< endl<<endl;

    cout<<"--------------------------------------------"<< endl;


/*
    for(i=1;i>10000;i++)

    {

    Koszt_benzyny= (Benzyna*Przebieg_msc*i*Spalanie)/100;
    Suma_lpg= (LPG*Przebieg_msc*i*Spalanie)/100;

    if (Koszt_benzyny>= Suma_lpg)

            {
        cout<< "Amortyzacja zacznie dzialac w " <<i<<" miesiacu"<<endl;
        i=10001;
            }

    }
*/
    return 0;
}
