/*
Explicacion breve de las variables basicas en C++
	int { Variable de tipo entero, no decimal, es decir sin puntos que induzcan a decimales; }
	float { Variable de tipo flotante/real/decimal, se han de denotar los decimales con un PUNTO ("."), nunca con una COMA (","); }
	bool { Variable de control que solo puede tener el valor de 1 o 0, verboseando True o False. Muy útil en el control de flujo; }
	char { Variable que almacena un caracter dentro de unos rangos, ya sean letras, simbolos o numeros; }
	string { Variable que almacena una CADENA de caracteres, para la cual es necesaria una liberia "#include <string>" y el prefijo "std::" }
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int entero;
	float decimal;
	bool booleano;
	char caracter;
	string cadena_de_caracteres;

	cout << "Introduce una variable tipo int: ";
	cin >> entero;

	cout << "Introduce una variable tipo decimal: ";
	cin >> decimal;

	cout << "Introduce una variable tipo bool: ";
	cin >> booleano;

	cout << "Introduce una variable tipo char: ";
	cin >> caracter;

	cout << "Introduce una variable tipo string: ";
	cin >> cadena_de_caracteres;

	cout << "\n==================================\n";
	cout << "Estas son tus variables: \n";
	cout << "Entero: " << entero << endl;
	cout << "Decimal: " << decimal << endl;
	cout << "Booleano: " << booleano << endl;
	cout << "Caracter: " << caracter << endl;
	cout << "Cadena de caracteres: " << cadena_de_caracteres << endl;
	cout << "==================================\n";
	return 0;
}
