//En la Academia “Cesar Vallejo”, el profesor de Cálculo califica a sus alumnos bajo un sistema
//vigesimal y siempre aplica un redondeo en las notas, de forma tal que estas siempre sean un
//número entero.
//4
//Luego del último examen, previo al simulacro final, el profesor desea saber cual fue la nota que
//se repitió más veces en sus alumnos.
//Realice un programa en C++, que ayude al profesor de Cálculo a obtener la frecuencia de todas
//las notas e indique cuales es la que más se repitió.
#include<iostream>
#include <math.h>
using namespace std;
void ejercicio8()
{

	int *a, lleva, n, moda, pos_i, s;
	double nota;
	a = new int[100];

	cout << "cuantas notas ingresara" << endl;
	cin >> n;
	cout << "ingrese nota por nota:";
	for (int i = 0; i < n; i++) {
		cin >> nota;
		a[i] = int(nota);
	}

	moda = 0;
	for (int i = 0; i < n; i++) {
		s = 0;
		for (int j = 0; j < n; j++) {
			if (a[i] == a[j] && i != j) {
				s = s + 1;
			}
		}
		if (s >= moda) {
			moda = s;//guardamos el mayor por el momento
			pos_i = i;
		}
		cout << "la moda es: " << a[pos_i] << " y tiene " << moda + 1 << " repeticiones" << endl;
		system("pause");
	}
}

