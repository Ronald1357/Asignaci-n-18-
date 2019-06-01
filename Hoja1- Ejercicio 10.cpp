//Se desea analizar 10 números enteros menores a 200 y determinar cuantos de ellos son números
//divisibles entre 3, pero usando un algoritmo especifico que se explicara a continuación.
//Un número es divisible entre 3 si el resultado de la suma de las cifras del número es múltiplo
//de tres.
//Para ello se pide hacer una función SUMADIG que permita calcular la suma de todos los dígitos
//de un número.
//Por ultimo realice un programa en C++ que genere 10 números enteros en un arreglo y los
//imprima, y utilizando la función previa SUMADIG revise los datos del arreglo y cuente cuantos
//números fueron divisibles entre 3.
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int SUMADIG(int numero) {
	int aux,suma,digito;
	aux = numero;
	suma = 0;
	while (aux > 0) {
		digito = aux % 10;
		aux = aux / 10;
		suma = suma + digito;
	  }
	return suma;
}


void ejercicio10() {
	srand(time(NULL));
	
	int* arreglo = new int[10];
	int conta_3;
		for (int i = 0; i < 10; i++) // generar el vector con numeros
		{
			arreglo[i] = rand()%200 ;
		}
	

		// recorrer el vector generado 
		conta_3 = 0;
		for (int i = 0; i < 10; i++) {
			cout << arreglo[i]<<endl;
			if (SUMADIG(arreglo[i]) % 3 == 0) {
				conta_3=conta_3 + 1;
			}
		}


		cout << "Hay " << conta_3 << " numeros divisibles por 3" << endl;
		_getch();

	}
