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
            if(!MiPila.llena())
            {
                int numero;
                cout << "\n\nIngresa un numero: "; cin>>numero;
                cin.ignore();
                MiPila.insertar(numero);
                cont++;
            }
            else
            {
                cout << "\nLa pila esta llena."<<endl;
            }
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
            if(MiPila.vacia())
            {
                cout << "\nLa pila esta vacia."<<endl;
            }
            else
            {
                cout << "\n\nEl tope de la pila es: "<<MiPila.posicion(cont-1);
            }
        }
        else if(op == "6")
        {
            break;
        }
    }
    return 0;
}
