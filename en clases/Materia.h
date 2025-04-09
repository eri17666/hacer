#pragma once
#include <iostream> // cin, cout
#include <string>	// para cadenas
using namespace std;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
class Materia
{
public:
	Materia();
	Materia(int sigla, string nombre, string paralelo, int nota, string docentes, string estudiantes);
	void Leer_datos_Materia();
	void Mostrar_Datos_Materia();
	string Get_Nombre_Materia();


private:
	int sigla;
	string nombre;
	string paralelo;
	int nota;
	string docente;
	string estudiantes;

};

