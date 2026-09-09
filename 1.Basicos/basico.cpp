/*
Explicacion breve de los básicos en C++
	#include { Sirve para incluir las librerias necesarias a tu codigo; }
	<iostream> { Es una libreria que en desglose hace lo siguiente: i=input; o=output; stream='mostrar en pantalla'; }
	usint namespace std { Simula y rellena la necesidad de un std:: en orden que la precise (en este caso cin y cout); }
	int { Declaracion de una variable de tipo entero. Lo explicaremos mejor en el siguiente fichero; }
	//NOTA CLAVE: A la hora de nombrar variables existen palabras reservadas por el compilador que NO SE PUEDEN utilizar como nombre
	cout { Sirve para mostrar en pantalla: 'c out'='c fuera' (suena absurdo pero funciona); }
	cin { Sirve para almacenar datos brindados por el usuario: 'c in'='c dentro'; }
	<<
	{
		Operadores necesarios a la hora de manipular cadenas cout cin. En primero no se suele profundizar demasiado dado que es tema
		de la sobrecarga de operadores. Han de utilizarse para separar variables o las susodichas de texto ("");
	}
	return 0; { Mera formalidad a la hora de hacer debugging. También habitual dado que la funcion espera un retorno de un entero "int main()"; }
*/

#include <iostream>
using namespace std;

int main()
{
	int numero = 0;
	cout << "Hola\n";
	cout << "Dime un numero, por favor: ";
	cin >> numero;
	cout << "Tu numero es " << numero << ".\n";

	return 0;
}
