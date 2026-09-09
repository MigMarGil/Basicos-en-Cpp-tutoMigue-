/*
Explicacion breve de la Programación Orientada a Objetos (POO) en C++
	clase (class) { Plantilla o molde que agrupa atributos (variables) y metodos (funciones) que describen un objeto; }
	objeto { Instancia concreta creada a partir de una clase; }
	modificadores de acceso { Controlan la visibilidad; public: accesible desde fuera, private: oculto por seguridad; }
	constructor { Metodo especial que lleva el mismo nombre de la clase y se ejecuta automaticamente al crear el objeto; }
*/

#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria
{
private:
	string titular;
	double saldo;

public:
	CuentaBancaria(string nombreTitular, double saldoInicial)
	{
		titular = nombreTitular;
		saldo = saldoInicial;
	}

	void consultarSaldo()
	{
		cout << "Titular: " << titular << " | Saldo actual: " << saldo << " euros\n";
	}

	void depositar(double cantidad)
	{
		if(cantidad > 0)
		{
			saldo += cantidad;
			cout << "Has depositado " << cantidad << " euros exitosamente.\n";
		}
	}
};

int main()
{
	CuentaBancaria miCuenta("Alex", 150.50);

	miCuenta.consultarSaldo();
	
	double deposito;
	cout << "Cuanto dinero deseas depositar?: ";
	cin >> deposito;

	miCuenta.depositar(deposito);
	miCuenta.consultarSaldo();

	return 0;
}
