#pragma once
#include "Estudiante.h"
#include <string.h>
using namespace std;


class VectorDeEstudiantes
{
 public:
	 VectorDeEstudiantes();
	 VectorDeEstudiantes(int cantidadMaxima);
	 ~VectorDeEstudiantes();
	 void leerestudiante();
	 void mostrar_estudiantes();
	 void buscar_estudiantes();


 private:

	 int cantidadMaxima;
	 int cantidadActual;
	 Estudiante* estudiantes;

};

