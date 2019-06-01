//Se desea hacer un análisis de las edades de N personas elegidas al azar. Para ello se desea
//realizar un programa en C++ que reciba como dato el número de personas N y genere las edades
//para esta cantidad de personas en un Arreglo y luego muestre en pantalla :
// Un listado de los N edades generados al azar(N tendrá un valor máximo de 100)
// La menor edad y su posición en el Arreglo.
// El número de personas que tienen entre 30 y 50 años.
//También se desea que el programa solicite una edad a buscar en el arreglo y muestre si se
//encontró o no en el arreglo.
#include<iostream>
using namespace std;
void ejercicio3()
{
	//EJEMPLO 3
	int *edades,n,edad,pos_i,min,n_conta,busca,encontrado,i;
	
	edades = new int[100];
	//ingreso de datos
	cout << "¿cuantas edades quiere ingresar ?:" << endl;
	cin >> n;
	n_conta = 0;
	for (int i = 0; i < n; i++) // Paso 3 - Operar
	{
		cout << "Ingrese edad " << endl;
		cout << i + 1 << ": ";
		cin >> edad;
		edades[i] = edad;
		if (i == 0) {
			min = edad;   //asignas la nota minima a la primera nota ingresada
			pos_i = i+1;
		}
		else {
			if (edad < min) {   // comparamos las notas siguienmets con la primera nota
				min = edad;
				pos_i = i+1;
			}

		}
		if (edad >= 30 && edad <= 50) { n_conta = n_conta + 1; }
	}


	cout << "Las edades son : " << endl;
	//imprimir
	for (int i = 0; i < n; i++) // Paso 3 - Operar
	{
		cout << edades[i] << endl;
	}
	cout << "la menor edad es :" << min << endl;
	cout << "la posicion donde se encuentra es :" << pos_i << endl;
	cout << "el numero de personas entre 30 y 50 es: " << n_conta << endl;
	cout << "ingrese una edad a buscar" << endl;
	cin >> busca;
	i = 0;
	encontrado = 0;
	while (i<n && encontrado==0) {             // recorre todo elvector y busca la edad pedida
		if (busca == edades[i]){ encontrado = 1; }
		i = i + 1;
	}
	if (encontrado == 1) { cout << "la edad  buscada se encuentra"<<endl; }
	else{ cout << "la edad  buscada no se encuentra"<<endl; }
	system("pause");
}