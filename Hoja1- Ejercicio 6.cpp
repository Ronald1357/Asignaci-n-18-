//empresa "ENCUESTAFA" se dedica a realizar estudios estadísticos sobre diversos temas.
//ltimo proyecto tiene como meta analizar el monto mensual aproximado que las personas
//stan comprando gaseosas o algún otro tipo de bebida embotellada.
//ra probar las funcionalidades del programa desarrollado para este proyecto.Se desea realizar
// programa en C++ que solicite el número de personas(N que tendrá un valor máximo de 200)
//n las que se trabajara y genere en un Arreglo un monto aleatorio entre 25 y 500 Nuevos Soles
//ra cada una de ellas.Luego muestre en pantalla :
//El listado de los N montos generados al azar.
//El listado ordenado ascendentemente de los N montos.
//El número de personas que gastaron entre 100 y 300 soles en bebidas.
//La cantidad de montos que tienen asociadas una cantidad impar.

#include<iostream>
#include <conio.h>

using namespace std;
void ejercicio6()
{

	int *gastos, gasto, n, conta_1, conta_2, aux;
	gastos = new int[200];
	cout << "¿cuantas montos quiere ingresar ?:" << endl;
	cin >> n;
	//Ingreso de Datos


	conta_1 = 0;
	conta_2 = 0;

	for (int i = 0; i < n; i++) // Paso 3 - Operar
	{
		gasto = 25 + rand() % (500 - 25);
		if (gasto > 100 && gastos[i] < 300) { conta_1 = conta_1 + 1; }
		if (gasto % 2 == 1) { conta_2 = conta_2 + 1; }
		gastos[i] = gasto;
	}

	//imprimir
	cout << "el reporte pedido es : " << endl;
	cout << "la lista sin ordenar es :" << endl;
	for (int i = 0; i < n; i++) {
		cout << gastos[i] << " ";
	}
	//algotimos para ordenar  - metodo burbuja
	for (int i = 0; i<n; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			if (gastos[j]<gastos[i])
			{
				aux = gastos[j];
				gastos[j] = gastos[i];
				gastos[i] = aux;
			}
		}
	}

	//mostrar el vector ordenado de manera ascendente
	cout << "la lista ordenada es : " << endl;
	for (int i = 0; i < n; i++) {
		cout << gastos[i] << " ";
	}
	cout << endl;

	cout << "# de montos entre 100 y 300: " << conta_1 << endl;
	cout << "# de montos impares : " << conta_2 << endl;

	system("pause");
}
