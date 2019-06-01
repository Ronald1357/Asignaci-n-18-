//En un salón de Lenguaje 1 se cuenta con las notas de la última práctica y se desea conocer lo
//siguiente:
// Promedio de Notas
// Moda
// La máxima nota
// La mínima nota
//Para ello deberá elaborar un programa en C++ que solicite el numero N de alumnos y la nota
//de la ultima practica de cada uno de ellos y almacenar las notas en un arreglo determinado para
//poder calcular lo anteriormente pedido.

#include<iostream>
#include<conio.h>
using namespace std;
void ejercicio4() {
	int *notas, n, nota,min,max,suma,s,moda,pos_i;

	notas = new int[100];
	//ingreso de datos
	cout << "¿cuantas notas quiere ingresar ?:" << endl;
	cin >> n;
	suma = 0;
	for (int i = 0; i < n; i++) // Paso 3 - Operar
	{
		cout << "Ingrese nota " << endl;
		cout << i + 1 << ": ";
		cin >> nota;
		suma = suma + nota;
		notas[i] = nota;
		if (i == 0) { min = nota; }   //asignas la nota minima a la primera nota ingresada
		else {
			if (nota < min) {min = nota;} // comparamos las notas siguienmets con la primera nota
		     }
		if (i == 0) { max = nota; }   //asignas la nota minima a la primera nota ingresada
		else {
			if (nota > max) { max = nota; } // comparamos las notas siguienmets con la primera nota
		}
	
	
	}
	moda = 0;
	for (int i = 0; i<n; i++) {
		s = 0;
		for (int j = 0; j<n; j++) {
			if (notas[i] == notas[j] && i!= j) {
				s = s + 1;
			}
		}
		if (s >= moda) {
			moda = s;//guardamos el mayor por el momento
			pos_i = i;
		}
	}
	
	
	cout << "El reporte pedido es: " << endl;
	//imprimir
	cout << "el promedio de notas es : " << suma / n << endl;
	cout << "la moda es: " << notas[pos_i] << " y tiene " << moda + 1 << " repeticiones" << endl;
	cout << "la menor nota es :" << min << endl;
	cout << "la mayor nota es :" << max << endl;
	system("pause");
	
	
}