#pragma once
#include <iostream> // cin, cout
#include <string>	// para cadenas
#include "Materia.h"
using namespace std;
class Carrera
{
public:
	Carrera();
	Carrera(string Nombre_De_Carrera, int codigo_de_la_carrera, string facultad, string duraciom, int cantida_maxima_materia);
	void Leer_datos_Carrera();
	void Mostrar_Datos_Carrera();
	int buscar_Carrera(int codigo_De_Carrera);
	void agregar_materia(Materia *materias_seleccionada);
	void mostrar_materia();

private:
	string Nombre_De_Carrera;
	int codigo_de_la_carrera=0;
	string facultad;
	string duraciom;

	Materia** materias;
	int cantidadActualMaterias;
	int cantidadMaximaMaterias;
};

