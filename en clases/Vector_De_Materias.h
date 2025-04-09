#pragma once
#include <string.h>
#include "Materia.h"
using namespace std;
class Vector_De_Materias
{

public:
	Vector_De_Materias();
	Vector_De_Materias(int cantidadMaxima);
	~Vector_De_Materias();
	void leerMaterias();
	void mostrar_Materias();
	Materia *chooseMateria();

private:

	int cantidadMaxima;
	int cantidadActual;
	Materia* materias;

};

