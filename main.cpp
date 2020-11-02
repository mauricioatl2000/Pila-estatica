#include <iostream>
#include "pila.h"

using namespace std;

int main()
{
    string op;
    Pila<int> MiPila;
    int cont=0;

    while(true)
    {
        cout << "\n\n ::Menu - Pila Estatica::" << endl;
        cout << "1) Apilar" << endl;
        cout << "2) Desapilar" << endl;
        cout << "3) Mostrar" << endl;
        cout << "4) Buscar" << endl;
        cout << "5) Tope" << endl;
        cout << "6) Salir" << endl;
        cout << "Ingresa una opcion: "; getline(cin, op);
        if(op == "1")
        {
            //apilar
        }
        else if(op == "2")
        {
            //desapilar
        }
        else if(op == "3")
        {
            //mostrar
        }
        else if(op == "4")
        {
            //buscar
        }
        else if(op == "5")
        {
            //tope
        }
        else if(op == "6")
        {
            break;
        }
    }
    return 0;
}
