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
            if(MiPila.vacia())
            {
                cout << "\nLa pila esta vacia."<<endl;
            }
            else
            {
                cout << "\n\nSe ha desapilado un elemento: "<<MiPila.posicion(cont-1)<<endl;
                MiPila.borrar(cont-1);
                cont--;
            }
        }
        else if(op == "3")
        {
            if(MiPila.vacia())
            {
                cout << "\nLa pila esta vacia."<<endl;
            }
            else
            {
                for(unsigned int i = 0; i < MiPila.cantidad();i++)
                {
                    cout << "\n"<<MiPila.posicion(i);
                }
            }
        }
        else if(op == "4")
        {
            if(MiPila.vacia())
            {
                cout << "\nLa pila esta vacia."<<endl;
            }
            else
            {
                int numero;
                bool bandera;
                bandera = false;
                cout << "\n\nIngresa un numero: "; cin>>numero;
                cin.ignore();
                for(unsigned int i = 0; i < MiPila.cantidad();i++)
                {
                    if(numero==MiPila.posicion(i))
                    {
                        cout << "\n Se encontro: "<<numero<<" en la posicion: "<<i;
                        bandera = true;
                    }
                }
                if(bandera==false)
                {
                    cout << "No se encontro el numero.";
                }
            }
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
