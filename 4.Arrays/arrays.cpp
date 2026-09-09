/*
Explicacion breve de los Arrays en C++
	array/arreglo/vector { Es una lista de variables del mismo tipo almacenadas de forma contigua en memoria; }
	tamaño fijo { Se denota utilizando corchetes ([]) para indicar el número máximo de elementos, ej: int arrayNumeros[10]; }
	índices { RECUERDA: Los índices de los arrays siempre empiezan desde el 0 hasta el (tamaño - 1); }
	valores basura { Si no se inicializa un array, contendrá datos residuales de memoria que deben ser reescritos; }
*/

#include <iostream>
using namespace std;

int main()
{
	int maximo{};
	cout << "Un array/arreglo/vector de forma básica y breve, es una lista de variables.\n";
	cout << "Se denota nombrando como cualquier variable, la unica diferencia es que se utilizan\n";
	cout << "los claudartors([]) para darle un tamaño fijo, por ejemplo int arrayNumeros[10]\n";
	cout << "\nDe cuanto quieres que sea tu primer array? ";
	cin >> maximo;

	int arrayNumeros[maximo];
	cout << "Vamos a mostrarlo en pantalla: \n";
	for(int i = 0; i < maximo; i++)
	{
		if(i == 0)
			cout << "[" << arrayNumeros[i] << ",";
		else if(i == (maximo-1))
			cout << arrayNumeros[i] << "]\n";
		else
			cout << arrayNumeros[i] << ",";
	}

	cout << "Ala, todo numeros basura, ahora lo que debemos hacer como buena practica de programacion es\n";
	cout << "inicializar nuestro array con los numeros que queramos, vamos a ello\n";
	cout << "RECUERDA: Los indices de los array's empiezan desde el 0\n";

	for(int i = 0; i < maximo; i++)
	{
		cout << "[" << i << "]: ";
		cin >> arrayNumeros[i];
	}

	for(int i = 0; i < maximo; i++)
	{
		if(i == 0)
			cout << "[" << arrayNumeros[i] << ",";
		else if(i == (maximo-1))
			cout << arrayNumeros[i] << "]\n";
		else
			cout << arrayNumeros[i] << ",";
	}

	cout << "Y esto seria un array\n";

	return 0;
}
