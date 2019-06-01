//Se requiere realizar un programa en C++ para poder procesar las notas de los alumnos de
//programación 3 y realizar un ajuste o curva en las notas.Para ello debe considerar lo siguiente :
//Las notas originales de los alumnos se almacenaran en un arreglo VNotas de N elementos.
//Donde N será ingresado por el usuario.
//Adicionalmente existirá un valor entero llamado curva que puede variar de 0 a 5 puntos
//inclusive y que será ingresado por el usuario también.
//El programa a través de uso de funciones deberá realizar lo siguiente :
//  Genera_Vector: Generar las N notas dentro del arreglo VNotas y listar las notas.
//	Aumenta_Curva : Solicita un valor para la curva y aplicarla a todas las notas del vector.
//	Considerar que no puede haber notas mayores a 20.
//	Imprimir_Aprobados : Listar las notas aprobadas después de haber realizado la curva en las
//	notas.Se aprueba con nota mayor o igual a 13.

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void main() {
	int n,aumento,aux,conta;
	srand(time(NULL));

	int* arreglo = new int[100];
	cout << "cuantas notas va ingresar?" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) // generar el vector con numeros
	{
		arreglo[i] = rand() % 20;
	}
	//imprimir vector inicial
	for (int i = 0; i < n; i++) // generar el vector con numeros
	{
		cout<< arreglo[i]<<endl;
	}
	cout << "cuanto sera el aumento de curva" << endl;
	cin >> aumento;
	for (int i = 0; i < n; i++) 
	{
		aux = arreglo[i] + aumento;
		if (aux > 20) { arreglo[i] = 20; }
		else { arreglo[i] = aux; }
	}
	//imprimir vector nuevo
	for (int i = 0; i < n; i++) // generar el vector con numeros
	{
		cout << arreglo[i] << endl;
	}
	//contar numeros aprobados
	conta = 0;
	for (int i = 0; i < n; i++) {
		if (arreglo[i] >= 13) { conta = conta + 1; }
	}
	cout << "# de aprobados es  : " << conta << endl;

	system("pause");
}