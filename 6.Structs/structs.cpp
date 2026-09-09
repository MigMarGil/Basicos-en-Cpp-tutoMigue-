/*
Explicacion breve de los Structs (Estructuras) en C++
	struct { Permite agrupar diferentes tipos de variables (int, string, float, etc.) bajo un mismo tipo de dato personalizado; }
	miembros { Las variables internas que componen la estructura y definen sus propiedades o características; }
	operador punto (.) { Símbolo utilizado para acceder o modificar los campos individuales de una instancia del struct; }
*/

#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura
struct Videojuego
{
	string titulo;
	int anio;
	float precio;
};

int main()
{
	// Declaración de una variable de tipo Videojuego
	Videojuego juego1;

	cout << "Vamos a registrar un videojuego.\n";
	cout << "Introduce el titulo: ";
	cin >> juego1.titulo;
	cout << "Introduce el año de lanzamiento: ";
	cin >> juego1.anio;
	cout << "Introduce el precio: ";
	cin >> juego1.precio;

	cout << "\n==================================\n";
	cout << "Detalles del videojuego registrado:\n";
	cout << "Titulo: " << juego1.titulo << "\n";
	cout << "Año: " << juego1.anio << "\n";
	cout << "Precio: " << juego1.precio << " euros\n";
	cout << "==================================\n";

	return 0;
}
