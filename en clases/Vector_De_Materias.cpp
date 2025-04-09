#include "Vector_De_Materias.h"


Vector_De_Materias::Vector_De_Materias()
{
}

Vector_De_Materias::Vector_De_Materias(int cantidadMaxima)
{
	this->cantidadActual = 0;
	this->cantidadMaxima = cantidadMaxima;
	this->materias = new Materia[cantidadMaxima];
}


Vector_De_Materias::~Vector_De_Materias()
{
}

void Vector_De_Materias::leerMaterias()
{
	if (cantidadActual < cantidadMaxima)
	{
		materias[cantidadActual].Leer_datos_Materia();
		cantidadActual++;
	}
	else
	{
		cout << "se llego al limite" << endl;
	}
}

void Vector_De_Materias::mostrar_Materias()
{
	for (int i = 0; i < cantidadActual; i++)
	{
		materias[i].Mostrar_Datos_Materia();
	}
}

Materia *Vector_De_Materias::chooseMateria()
{
    int position;

   
    for (int i = 0; i < cantidadActual; i++)
    {
        cout << i << " : " << materias[i].Get_Nombre_Materia();
        
    }

    cout << "Ingrese la posición de la materia que desea elegir: ";
    cin >> position;

    
    if (position >= 0 && position < cantidadActual)
    {
        return &materias[position];
    }
    else
    {
        cout << "Posición no válida." << endl;
      
    }
}



