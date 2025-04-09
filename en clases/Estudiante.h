#pragma once
#include <iostream> // cin, cout
#include <string>	// para cadenas
using namespace std;
/*
Objeto Estudiante
- 5 caracteristicas - atributos/variables (parametros que lo resaltan)
	- string ci: privado
	- string nombre: privado
	- int semestre: privado
	- string carrera: privado
	- int edad: privado
*/
/*
- 5 comportamientos - funciones/procedimientos (acciones)
	- void leerDatos - publico
	- void mostrarDatos - publico
*/
// el .h contiene definiciones, firmas de la clase
class Estudiante
{
public:
	// Constructor siempre tiene el mismo nombre que la clase
	Estudiante();
	Estudiante(string ci);
	Estudiante(string ci, string nombre);
	Estudiante(string ci, string nombre, int semestre, string carrera, int edad);
	void leerDatos();
	void mostrarDatos();
	int buscarestudiante(string ci_estudiante);
	~Estudiante();
private:
	string ci;
	string nombre;
	int semestre=0;
	string carrera;
	int edad=0;
};

