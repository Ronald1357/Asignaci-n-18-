//Se desea analizar 10 n�meros enteros menores a 200 y determinar cuantos de ellos son n�meros
//capic�as.
//Para ello se pide hacer una funci�n INVERTIR que reciba un n�mero entero y permita devolver
//el n�mero invertido.
//Por ultimo realice un programa en C++ que genere 10 n�meros enteros menores a 200 en un
//arreglo y los imprima y utilizando como ayuda la funci�n previa INVERTIR revise los datos
//del arreglo e imprima cuantos n�meros capic�as hay

//Codigo 3:
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
bool escapicua(int numero) {
	int numeroaux = numero; // para hallar la cantidad de digitos sin perder el numero original
	int primerdigito, ultimodigito;
	int cantidaddigitos = 0;
	bool retorno;
	//primero hallamos la cantidad de digitos:
	while (true)
	{
		if (numeroaux > 0) {
			numeroaux = numeroaux / 10;
			cantidaddigitos++;
		}
		else break;
	}
	//ahora pasamos a validar si el ultimo digito es igual al primer digito, hasta que encontremos que alguno de ellos sea diferente
	while (true)
	{
		//validamos para que la cantidad de digitos restantes no sea menor que 1:
		if (cantidaddigitos <= 1) {
			retorno = true;
			break;
		}
		//sacamos el primer digito:
		primerdigito = numero / int(pow(10, cantidaddigitos - 1));
		//sacamos el ultimo digito:
		ultimodigito = numero % 10;
		//comparamos
		if (primerdigito != ultimodigito) {
			retorno = false;
			break;
		}
		//ahora quitamos el primer digito:
		numero = numero % int(pow(10, cantidaddigitos - 1));
		//quitamos el ultimo digito:
		numero = numero / 10;
		//restamos los digitos quitados:
		cantidaddigitos -= 2;
	}

	return retorno;
}

void ejercicio9() {
	srand(time(NULL));
	int numeros = 10;
	int* arreglo = new int[numeros];
	int contadorcapicua = 0;
	while (true)
	{
		contadorcapicua = 0;
		for (int i = 0; i < numeros; i++)
		{
			arreglo[i] = rand() % 200;
		}
		for (int i = 0; i < numeros; i++)
		{
			cout << arreglo[i] << "  ";
		}
		cout << endl;
		for (int i = 0; i < numeros; i++)
		{
			if (escapicua(arreglo[i]) == true) {
				contadorcapicua++;
				cout << "El numero " << arreglo[i] << " es capicua" << endl;
			}
		}
		cout << "Hay " << contadorcapicua << " numeros capicuas" << endl;
		_getch();

	}
	contadorcapicua = NULL;
}
