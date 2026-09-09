/*
Explicacion breve de las Funciones en C++
	función { Bloque de código reutilizable diseñado para realizar una tarea específica y evitar repetir código; }
	tipo de retorno { Indica el tipo de dato que la función devolverá al finalizar (ej. int, string, void si no devuelve nada); }
	parámetros { Variables declaradas entre paréntesis que la función recibe como datos de entrada para operar con ellos; }
	return { Palabra clave obligatoria (si no es void) para devolver el resultado final y salir de la función; }
*/

#include <iostream>
#include <string>
using namespace std;

void saludar(string nombre)
{
	cout << "Hola, " << nombre << "! Bienvenido al tutorial de funciones.\n";
}

int sumar(int a, int b)
{
	return a + b;
}

int main()
{
	string miNombre;
	cout << "Dime tu nombre para saludarte: ";
	cin >> miNombre;

	saludar(miNombre);

	int num1, num2;
	cout << "Introduce el primer numero a sumar: ";
	cin >> num1;
	cout << "Introduce el segundo numero a sumar: ";
	cin >> num2;

	int resultado = sumar(num1, num2);
	cout << "El resultado de la suma es: " << resultado << "\n";

	return 0;
}
