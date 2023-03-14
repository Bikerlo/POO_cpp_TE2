#ifndef COFFEMAKER_H
#define COFFEMAKER_H

#include <iostream>
#include <vector>
#include <fstream>

class Cafetera
{
private:
    int capacidadMaxima;
    int cantidadActual;
public:
    // Constructor predeterminado
    Cafetera()
    {
        capacidadMaxima = 1000;
        cantidadActual = 0;
    }

    // Constructor con la capacidad máxima de la cafetera
    Cafetera(int capacidadMaxima)
    {
        this->capacidadMaxima = capacidadMaxima;
        cantidadActual = capacidadMaxima;
    }

    // Constructor con la capacidad máxima y la cantidad actual
    Cafetera(int capacidadMaxima, int cantidadActual)
    {
        this->capacidadMaxima = capacidadMaxima;
        if (cantidadActual > capacidadMaxima)
        {
            this->cantidadActual = capacidadMaxima;
        }
        else
        {
            this->cantidadActual = cantidadActual;
        }
    }

    // Modificadores y recuperadores
    int getCapacidadMaxima()
    {
        return capacidadMaxima;
    }

    void setCapacidadMaxima(int capacidadMaxima)
    {
        this->capacidadMaxima = capacidadMaxima;
    }

    int getCantidadActual()
    {
        return cantidadActual;
    }

    void setCantidadActual(int cantidadActual)
    {
        this->cantidadActual = cantidadActual;
    }

    // Llenar la cafetera
    void llenarCafetera()
    {
        cantidadActual = capacidadMaxima;
    }

    // Servir una taza
    void servirTaza(int cantidad)
    {
        if (cantidadActual >= cantidad)
        {
            cantidadActual -= cantidad;
        }
        else
        {
            cantidadActual = 0;
        }
    }

    // Vaciar la cafetera
    void vaciarCafetera()
    {
        cantidadActual = 0;
    }

    // Agregar café a la cafetera
    void agregarCafe(int cantidad)
    {
        if ((cantidadActual + cantidad) <= capacidadMaxima)
        {
            cantidadActual += cantidad;
        }
        else
        {
            cantidadActual = capacidadMaxima;
        }
    }
};


#endif // COFFEMAKER_H
