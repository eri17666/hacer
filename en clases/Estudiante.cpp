#include "Estudiante.h"

// el .cpp contiene la implementacion de 
// las funciones/procedimientos de la clase

Estudiante::Estudiante()
{
	cout << "hola desde el contructor vacio" << endl;
	
}

Estudiante::Estudiante(string ci)
{
	cout << "hola desde el contructor vacio con el ci" << endl;
	this->ci = ci;

}

Estudiante::Estudiante(string ci, string nombre)
{
	cout << "hola desde el contructor vacio con el ci y nombre" << endl;
	this->ci = ci;
	this->nombre = nombre;
	
}

Estudiante::Estudiante(string ci, string nombre, int semestre, string carrera, int edad)
{
	cout << "hola desde el contructor vacio con todos los atributos" << endl;
	this->ci = ci;
	this->nombre = nombre;
	this->semestre = semestre;
	this->carrera = carrera;
	this->edad = edad;

}

// Una funcion o procedimiento tiene acceso a los atributos
// de la clase 
void Estudiante::leerDatos()
{
	cout << "Ingrese el ci: ";
	cin >> ci;
	cout << "Ingrese el nombre: ";
	cin >> nombre;
	cout << "Ingrese el semestre: ";
	cin >> semestre;
	cout << "Ingrese la carrera: ";
	cin >> carrera;
	cout << "Ingrese la edad: ";
	cin >> edad;
}

void Estudiante::mostrarDatos()
{
	cout << "Ci: " << ci << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Semestre: " << semestre << endl;
	cout << "Carrera: " << carrera << endl;
	cout << "Edad: " << edad << endl;
}

int Estudiante::buscarestudiante(string ci_estudiante)
{
	
	

    if(ci_estudiante==ci)
	{
		return true;
	}
	else
	{
		return false;
	}



}

Estudiante::~Estudiante()
{
	cout << "destructor de estudiantes" << endl;
	//libera estudiantes el delete solo para punteros
}
                