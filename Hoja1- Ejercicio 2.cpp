//El gerente del gimnasio Fitness Gym, desea contar con un programa en C++ que permita leer
//los pesos de 10 clientes, almacenarlos en un vector y luego le indique los siguientes datos
//estadísticos :
// El peso promedio.
// El peso de la persona que pesa más.
// El número de personas cuya contextura es delgada(si su peso es menor a 53 kilos)
// El número de personas cuya contextura es mediana(si su peso esta entre 53 y 60 kilos
//	inclusive)
//	 El número de personas cuya contextura es gruesa(si su peso es mayor a 60 kilos)
#include<iostream>
#include<conio.h>
using namespace std;
void ejercicio2()
{
	//EJEMPLO 3
	int *pesos, peso, max, suma,n_delg,n_med,n_gruesa;
	double promedio;
	pesos = new int[10];
	suma = 0;//el acumulador de las notas inicializo en cero
	//contadores
	n_delg = 0;
	n_med = 0;
	n_gruesa = 0;
	//Ingreso de Datos
	for (int i = 0; i < 10; i++) // Paso 3 - Operar
	{
		cout << "Ingrese peso " << endl;
		cout << i + 1 << ": ";
		cin >> peso;
		pesos[i] = peso;
		if (i == 0) {
			max = peso;   //asignas la nota minima a la primera nota ingresada
		}else {
			if (peso > max) {   // comparamos las notas siguienmets con la primera nota
				max = peso;}
		}
		suma = suma + peso;
		if (peso < 53) { n_delg = n_delg + 1; }
		else {
			if (peso < 60) { n_med = n_med + 1; }
			else { n_gruesa = n_gruesa + 1; }
		}

	}

	cout << "Los pesos  son : " << endl;
	//imprimir
	for (int i = 0; i < 10; i++) // Paso 3 - Operar
	{
		cout << pesos[i] << endl;
	}
	cout << "el peso maximo es :  " << max << endl;
	cout << "el peso promedio es : " << (suma) / 10 << endl;
	cout << "el numero de personas de  contextura delgada es : " << n_delg << endl;
	cout << "el numero de personas de  contextura mediana es : " << n_med << endl;
	cout << "el numero de personas de  contextura gruesa es : " << n_gruesa << endl;

	system("pause");
}
