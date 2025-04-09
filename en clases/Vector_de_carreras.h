#pragma once
#include<iostream>
#include "Carrera.h"
#include "Vector_De_Materias.h"
class Vector_de_carreras
{
public:
	Vector_de_carreras();
	Vector_de_carreras(int cantidadMaxima);
	~Vector_de_carreras();
	void leerCarreras();
	void mostrar_carreras();
	void buscar_carreras();
	void asignarMateriaACarrera();


private:

	int cantidadMaxima = 0;
	int cantidadActual = 0;
	Carrera* carreras;
	Vector_De_Materias materias;
	
};

