#ifndef PILA_H
#define PILA_H
#define MAX 10

template <class tipo>
class Pila
{
public:
    Pila();
    bool vacia();
    bool llena();
    void insertar(tipo elemento);
    void borrar (unsigned int posicion);
    unsigned int cantidad();
    tipo posicion(unsigned int posicion);
private:
    tipo arreglo[MAX];
    unsigned int contador;
};

template <class tipo>
Pila<tipo>::Pila()
{
    contador = 0;
}

template <class tipo>
bool Pila<tipo>::vacia()
{
    return contador == 0;
}

template <class tipo>
bool Pila<tipo>::llena()
{
    return contador == MAX;
}

template <class tipo>
void Pila<tipo>::insertar(tipo elemento)
{
    if(contador < MAX )
    {
        arreglo[contador] = elemento;
        contador++;
    }
}

template<class tipo>
void Pila<tipo>::borrar(unsigned int posicion)
{
    for(unsigned int i = posicion; i < contador; i++)
    {
        arreglo[i] = arreglo[i+1];
    }
    contador--;
}

template <class tipo>
unsigned int Pila<tipo>::cantidad()
{
    return contador;
}

template <class tipo>
tipo Pila<tipo>::posicion(unsigned int posicion)
{
    return arreglo[posicion];
}

#endif // COLA_H
