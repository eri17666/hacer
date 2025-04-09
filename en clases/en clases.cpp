#include "Estudiante.h"
#include "VectorDeEstudiantes.h"
#include "Carrera.h"
#include "Vector_de_carreras.h"

using namespace std;

/*
Objeto: algo en el espacio
-- abstraccion: proceso de recolectar informacion
-- encapsulacion: proceso de como un objeto permite el acceso a caracteristias y comportamiento
-- modularidad: organizar en varios modulos(componentes, grupos)
para el objeto 'Estudiante', abstraer
- 5 caracteristicas (parametros que lo resaltan)
	- ci
	- nombre
	- semestre
	- carrera
	- edad
- 5 comportamientos (acciones)
	- estudia
	- leer
	- dormir
	- escribir
	- comer

-- clase(class): representacion de un objeto a nivel de codigo C++
	representamos el comportamiento con funciones/procedimientos y
	representamos las caracteristicas con atributos
*/

/*
Tarea: abstraer los objetos
- materia, carrera, universidad
luego implementar las clases
*/

int main()
{
	//int num = 0;
	//int cantidadEstudiantes=2;
	//int* vectordinamico = new int[10];

	//Estudiante pepito,juan;
	//Estudiante estudiantes[5];
	
	//Estudiante* estudianteDinamico = new Estudiante[cantidadEstudiantes];

	//for (int i = 0; i < cantidadEstudiantes; i++)
	//{
	//	estudianteDinamico[i].leerDatos();

	//}

	//for (int i = 0; i < cantidadEstudiantes; i++)
	//{
		//estudianteDinamico[i].mostrarDatos();

	//}

	//delete[] estudianteDinamico;


	//pepito.leerDatos();
	//pepito.mostrarDatos();

	//estudiantes[0].leerDatos();
	//estudiantes[0].mostrarDatos();


	/*
	Estudiante pepito;
	Estudiante juan("123");
	juan.mostrarDatos();
	Estudiante juan1("123","juan1");
	juan.mostrarDatos();
	Estudiante pedro("123", "pedro",8,"sis",22);
	pedro.mostrarDatos();
	*/

	/*
	VectorDeEstudiantes estudiantes(2);
	
	estudiantes.leerestudiante();
	estudiantes.leerestudiante();
	estudiantes.mostrar_estudiantes();
	estudiantes.buscar_estudiantes();
	*/

	//Carrera sistemas;
	//sistemas.Leer_datos_Carrera();
	//sistemas.Mostrar_Datos_Carrera();


	/*
	Vector_de_carreras carreras(2);
	carreras.leerCarreras();
	carreras.leerCarreras();
	carreras.mostrar_carreras();
	carreras.buscar_carreras();
	*/


	Vector_De_Materias materias(10);  // Vector con capacidad para 10 materias
	Vector_de_carreras carreras(5);   // Vector con capacidad para 5 carreras

	materias.leerMaterias();   // Leer las materias disponibles
	carreras.leerCarreras();   // Leer las carreras disponibles
	carreras.mostrar_carreras();
	carreras.asignarMateriaACarrera();
	carreras.mostrar_carreras();



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
