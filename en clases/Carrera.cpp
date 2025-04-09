#include "Carrera.h"

Carrera::Carrera()
{
	codigo_de_la_carrera = 0;
	this->cantidadActualMaterias = 0;
}

Carrera::Carrera(string Nombre_De_Carrera, int codigo_de_la_carrera, string facultad, string duraciom, int cantida_maxima_materia)
{
	this->Nombre_De_Carrera = Nombre_De_Carrera;
	this->codigo_de_la_carrera = codigo_de_la_carrera;
	this->facultad = facultad;
	this->duraciom = duraciom;
	this->cantidadMaximaMaterias = cantida_maxima_materia;
	this->cantidadActualMaterias = 0;
	this->materias = new Materia * [cantidadMaximaMaterias];
	
	
	
}

void Carrera::Leer_datos_Carrera()
{
	cout << "Ingrese el Nombre_De_Carrera ";
	cin >> Nombre_De_Carrera;
	cout << "Ingrese el codigo_de_la_carrera ";
	cin >> codigo_de_la_carrera;
	cout << "Ingrese la facultad: ";
	cin >> facultad;
	cout << "Ingrese la duraciom: ";
	cin >> duraciom;
	cout << "ingrese el numero de materia en esta carrera" << endl;
	cin >> cantidadMaximaMaterias;

}

void Carrera::Mostrar_Datos_Carrera()
{
	
	cout << "Nombre_De_Carrera: " << Nombre_De_Carrera << endl;
   cout << "codigo_de_la_carrera: " << codigo_de_la_carrera << endl;
	cout << "facultad: " << facultad << endl;
	cout << "duraciom: " << duraciom << endl;
	cout << "materia de la carrera:" << endl;

	
}

int Carrera::buscar_Carrera(int codigo_De_Carrera)
{
	if (codigo_de_la_carrera == codigo_De_Carrera)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Carrera::agregar_materia(Materia* materias_seleccionada)
{
	if (cantidadActualMaterias < cantidadMaximaMaterias) {
		materias[cantidadActualMaterias] = materias_seleccionada;
		cantidadActualMaterias++;
		cout << "Materia agregada correctamente.\n";
	}
	else {
		cout << "No se pueden agregar más materias a esta carrera.\n";
	}

}

void Carrera::mostrar_materia()
{
	//materias->Mostrar_Datos_Materia();
}
