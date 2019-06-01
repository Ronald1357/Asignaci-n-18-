
#include<iostream>
using namespace std;
void ejercicio1()
{
	//EJEMPLO 3
	int *notas, nota, min, suma;
	double promedio;
	notas = new int[6];
	suma = 0;//el acumulador de las notas inicializo en cero
	//Ingreso de Datos
	for (int i = 0; i < 6; i++) // Paso 3 - Operar
	{
		cout << "Ingrese nota entre 0 y 20 " << endl;
		cout << i + 1 << ": ";
		cin >> nota;
		notas[i] = nota;
		if (i == 0) {
			min = nota;   //asignas la nota minima a la primera nota ingresada
		}
		else {
			if (nota < min) {   // comparamos las notas siguienmets con la primera nota
				min = nota;
			}

		}
		suma = suma + nota;
	}


		cout << "Las nota son : " << endl;
		//imprimir
		for (int i = 0; i < 6; i++) // Paso 3 - Operar
		{
			cout << notas[i] << endl;
		}
		cout << "La nota que no se considera es : " << min << endl;
		promedio = (suma - min) / 5;
		cout << "el promedio es : " << promedio << endl;

		system("pause");
}

