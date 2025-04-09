#include "VectorDeEstudiantes.h"

VectorDeEstudiantes::VectorDeEstudiantes()
{
}

VectorDeEstudiantes::VectorDeEstudiantes(int cantidadMaxima)
{
	this->cantidadActual = 0;
	this->cantidadMaxima = cantidadMaxima;
	this->estudiantes = new Estudiante[cantidadMaxima];

}

VectorDeEstudiantes::~VectorDeEstudiantes()
{
	delete[] estudiantes;
}

void VectorDeEstudiantes::leerestudiante()
{
	if (cantidadActual < cantidadMaxima)
	{
		estudiantes[cantidadActual].leerDatos();
		cantidadActual++;
	}
	else
	{
		cout << "se llego al limite" << endl;
	}
}

void VectorDeEstudiantes::mostrar_estudiantes()
{
	for (int i = 0; i < cantidadActual; i++)
	{
		estudiantes[i].mostrarDatos();
	}
}

void VectorDeEstudiantes::buscar_estudiantes()
{
	string ci_estudiante;
	cout << "ingresa el ci del estudiante a buscar" << endl;
	cin >> ci_estudiante;

	bool encontrado=false;

	for (int i = 0; i < cantidadActual; i++)
	{
	   if(estudiantes[i].buscarestudiante(ci_estudiante)==true)
	   {
		   estudiantes[i].mostrarDatos();
		   encontrado = true;
	   }  
	}

	if(!encontrado)
	{
		cout << "no se encontro al estudiante" << endl;
	}
	
}
