//Se desea analizar 10 n�meros enteros menores a 200 y determinar cuantos de ellos son n�meros
//divisibles entre 3, pero usando un algoritmo especifico que se explicara a continuaci�n.
//Un n�mero es divisible entre 3 si el resultado de la suma de las cifras del n�mero es m�ltiplo
//de tres.
//Para ello se pide hacer una funci�n SUMADIG que permita calcular la suma de todos los d�gitos
//de un n�mero.
//Por ultimo realice un programa en C++ que genere 10 n�meros enteros en un arreglo y los
//imprima, y utilizando la funci�n previa SUMADIG revise los datos del arreglo y cuente cuantos
//n�meros fueron divisibles entre 3.
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
