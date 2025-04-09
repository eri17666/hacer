#include "Vector_de_carreras.h"

Vector_de_carreras::Vector_de_carreras()
{

}

Vector_de_carreras::Vector_de_carreras(int cantidadMaxima)
{
	this->cantidadActual = 0;
	this->cantidadMaxima = cantidadMaxima;
	this->carreras = new Carrera[cantidadMaxima];

}

Vector_de_carreras::~Vector_de_carreras()
{
	delete[] carreras;
}

void Vector_de_carreras::leerCarreras()
{
	if(cantidadActual<cantidadMaxima)
	{

		
		carreras[cantidadActual].Leer_datos_Carrera();


		cantidadActual++;
	}

}

void Vector_de_carreras::mostrar_carreras()
{
	for (int i = 0; i < cantidadActual; i++)
	{
		carreras[i].Mostrar_Datos_Carrera();
		cout << "sus materias de cada carrera son:" << endl;
		carreras[i].mostrar_materia();
	}
}

void Vector_de_carreras::buscar_carreras()
{
	int codigo_carrera;
	cout << "ingresa el codigo de la carrera a buscar" << endl;
	cin >> codigo_carrera;
	bool carreraEncontrada = false;

	for (int i = 0; i < cantidadActual; i++)
	{
		if(carreras[i].buscar_Carrera(codigo_carrera)==true)
		{
			carreras[i].Mostrar_Datos_Carrera();
			carreraEncontrada = true;
		}

	
	}
	if(!carreraEncontrada)
	{
		cout << "no se encontro la carrera" << endl;
	}



   

}

void Vector_de_carreras::asignarMateriaACarrera()
{
	Materia* materiaSeleccionada = materias.chooseMateria();

	for (int i = 0; i < cantidadActual; i++)
	{
		carreras[i].agregar_materia(materiaSeleccionada);
		cout << "Materia asignada correctamente a la carrera." << endl;
		
	}

}
