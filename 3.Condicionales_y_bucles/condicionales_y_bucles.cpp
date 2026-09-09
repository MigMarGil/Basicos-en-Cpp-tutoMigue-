/*
Explicacion breve y básica de condicionales y bucles
	if(condicion) { El codicional if obedece a su condición, es decir si la condición que hay dentro de los paréntesis se cumple
			el codigo que se halla en su interior se ejecutara, de lo contrario continuara con un else if; else; o el resto }
	else { Condicion antonima al if, es decir, cumple el resto de condiciones que no son obedecidas por la misma }
	do-while(condicion) { Ejecuta minimo una vez y prosigue el bucle while/mientras la condicion que se encuentra dentro de los
			      parentesis deje de cumplirse. En resumen, ejecuta y luego valida la condicion. }
	while(condicion) { Piensa y posteriormente ejecuta hasta que la condicion deje de cumplirse. Muy utilizado en la busqueda, junto
			   con una variable bandera a considerar booleana. }
	for(inicializacion; condicion; incremento) { Bucle utilizado en recursividad, no en busqueda. }
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool ifElse = false; 
	bool whileNormal = false;
	bool switchCase = false;
	char decision{};
	do
	{
		cout << "Has entendido los dos anteriores ficheros? [s/n]: ";
		cin >> decision;
		if(decision == 's')
		{
			cout << "MUY BIEN!!! Has superado el if_else. Puedes seguir aprendiendo\n";
			ifElse = true;
		}
		else if(decision == 'n')
		{
			cout << "No te preocupes, repasa y vuelves mas tarde con mas energia y ganas de aprender!\n";
		}
		else
		{
			cout << "Has tipado mal, debiste poner una s o una n. Tranquilo, el bucle do while te va a dar más oportunidades\n";
		}
	}while(decision != 's' && decision != 'n');

	if(ifElse == true)
	{
		while(!whileNormal && decision != 'n')
		{
			cout << "\n¿Seguro? [s/n]: ";
			cin >> decision;
			if(decision == 's')
			{
				cout << "MUY BIEN!!! Has superado al bucle while clasico. Puedes seguir aprendiendo\n";
				whileNormal = true;
			}
			else if(decision == 'n')
			{
				cout << "No te preocupes, repasa y vuelves mas tarde con mas energia y ganas de aprender!\n";
			}
			else
			{
				cout << "Has tipado mal, debiste poner una s o una n. Tranquilo, el bucle do while te va a dar más oportunidades\n";
			}
		}
	}

	if(whileNormal == true)
	{
		char respuesta{};
		do
		{
			cout << "\nVas muy bien, has superado al condicional if-else y al bucle do-while y while\n";
			cout << "ahora toca explicarte enseñarte el switch-case con una pregunta tipo test para\n";
			cout << "consolidar los conocimientos del bucle while y el do-while. Vamos a por ello!";
			cout << "\n\nPREGUNTA: Que diferencia tiene el bucle while con el do-while\n";
			cout << "a) El bucle do-while ejecuta como minimo 1 vez, ejecuta y despues piensa, a diferencia del while que piensa y despues ejecuta.\n";
			cout << "b) El do\n";
			cout << "c) Es trampa, ambos bucles son intercambiables entre si\n";
			cout << "Respuesta [a/b/c]: ";
			cin >> respuesta;

			switch(respuesta)
			{
				case 'a':
					cout << "Muy bien, podemos proseguir con el bucle for.\n";
					switchCase = true;
					break;
				case 'b':
					cout << "MAL. Intentalo de nuevo\n";
					break;
				case 'c':
					cout << "MAL. Intentalo de nuevo\n";
					break;
				default:
					cout << "MAL. Pon al menos una de las opciones\n";
					break;
			}
		}while(!switchCase);
	}

	int felicitaciones{};
	string nombre;
	cout << "Es precioso y quita el aliento ver cuanto aprendes Y TAN RAPIDO!\n";
	cout << "Cuantas veces quieres que te felicitemos? ";
	cin >> felicitaciones;
	cout << "Pero antes. Como quieres que te llame para felicitarte? ";
	cin >> nombre;

	for(int i = 0; i < felicitaciones; i++)
	{
		cout << "FELICIDADES " << nombre << "!\n";
	}

	cout << "Y ya esta, esto son los bucles y iteradores!\n";
	return 0;
}
