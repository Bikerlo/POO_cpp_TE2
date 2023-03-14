#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "coffeMaker.h"

using namespace std;

int taza=0;

int main()
{
    Cafetera nestle = Cafetera();
    char opcion;
    string mens;
    do
    {

        cout << "....WELCOME TO NESTLE...." << endl;
        cout << "1. Show actual capacity" << endl;
        cout << "2. Fill a cup" << endl;
        cout << "3. Empty the coffeMaker" << endl;
        cout << "4. Full the coffeMaker" << endl;
        cout << "0. Salir" << endl << endl;
        cin >> opcion;
        system("cls");
        switch(opcion)
        {
            case '1':
                cout<<"Actual capacity: "<<nestle.getCantidadActual()<<endl;
                break;
            case '2':
                cout<<"how much coffe do you want?"<<endl;
                cin>>taza;
                nestle.servirTaza(taza);
                break;
            case '3':
                nestle.vaciarCafetera();
                cout<<"Emptying..."<<endl;
                Sleep(3000);
                cout<<"Emptying is done..."<<endl;
                break;
            case '4':
                nestle.llenarCafetera();
                cout<<"Filling..."<<endl;
                Sleep(5000);
                cout<<"Filling is done..."<<endl;
                break;
            case '0':
                break;
            default:
                cout << "Opcion errada" << endl;
        }
    }while(opcion!='0');

    return 0;
}
