#include <iostream>

#include "canon_defensivo.h"
#include "canon_ofensivo.h"

using namespace std;

int main()
{
    int opcion1 = 1;
    while (opcion1 != 0)
    {
        system("cls");
        cout<<"***** parcial  *****\n"<<endl;
        cout<<"seleccione una opcion \n"<<endl;
        cout<<"1) Generar disparos (al menos tres) ofensivos que comprometan la \nintegridad del cañón defensivo.\n"<<endl;
        cout<<"2) Generar disparos (al menos tres) defensivos que comprometan la \nintegridad del cañón ofensivo\n."<<endl;
        cout<<"3) Dado un disparo ofensivo, generar disparos defensivos que impida \nque el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido.\n"<<endl;
        cout<<"4) Dado un disparo ofensivo, generar disparo defensivos que impidan \nque los cañones defensivo y ofensivo puedan ser destruidos.\n"<<endl;
        cout<<"5) Dado un disparo ofensivo efectivo y un disparo defensivo que \ncomprometa la efectividad del ataque ofensivo, generar disparos que neutralicen el ataque defensivo \ny permitan que el ataque ofensivo sea efectivo.\n"<<endl;
        cout<<"\n Presione 0 para salir"<<endl;
        cin>>opcion1;

        switch (opcion1)
        {
        case 1:

            break;

        case 2:
            break;

        case 3:
            break;

        default:
            cout <<"La opcion ingresada no es valida\n";
            break;

        } //switch
    }//while opcion1

    return 0;
}
