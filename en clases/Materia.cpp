#include "Materia.h"

Materia::Materia()
{

}

Materia::Materia(int sigla, string nombre, string paralelo, int nota, string docentes, string estudiantes)
{
	this->sigla = sigla;
	this->nombre = nombre;
	this->paralelo = paralelo;
	this->nota = nota;
	this->estudiantes = estudiantes;

}

void Materia::Leer_datos_Materia()
{
	cout << "ingrese la sigla" << endl;
	cin >> sigla;
	cout << "ingrese el nombre de la materia" << endl;
	cin >> nombre;
	cout << "ingrese el paralelo" << endl;
	cin >> paralelo;
	cout << "ingrese la nota" << endl;
	cin >> nota;
	cout << "ingrese los estudiantes" << endl;
	cin >> estudiantes;
}

void Materia::Mostrar_Datos_Materia()
{
	cout << "sigla:" << sigla << endl;
	cout << "nombre:" << nombre << endl;
	cout << "paralelo:" << paralelo << endl;
	cout << "nota:" << nota << endl;
	cout << "estudiantes:" << estudiantes << endl;
}

string Materia::Get_Nombre_Materia()
{
	return nombre;
}

