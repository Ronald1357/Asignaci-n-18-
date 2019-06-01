//En un salón de Ingles 4 en función a las notas del examen Parcial y que cuenta con N (máximo
//40) alumnos se desea conocer lo siguiente :
// La cantidad de personas que obtuvieron 00
// La cantidad de personas que obtuvieron 20
// La cantidad de personas aprobadas
// La cantidad de personas desaprobadas
//Un alumno esta aprobado si tiene nota mayor igual a 13.
//Se pide que elabore un programa en C++ que mediante uso de arreglos almacenen la
//información de las notas de los alumnos y que permita calcular lo anterior mente mencionado.
#include<iostream>
using namespace std;
void ejercicio5()
{
	
	int *notas, nota,n, conta_0,conta_20,conta_apro,conta_desa,invalido;
	
	notas = new int[40];
	cout << "¿cuantas notas quiere ingresar ?:" << endl;
	cin >> n;
			 //Ingreso de Datos
	
	conta_0 = 0;
	conta_20 = 0;
	conta_apro = 0;
	conta_desa = 0;
	for (int i = 0; i < n; i++) // Paso 3 - Operar
	{
		
		invalido = 0;
		while (invalido == 0){   // para validar el ingreso de notas
		cout << "Ingrese nota entre 0 y 20 " << endl;
		cout << i + 1 << ": ";
		cin >> nota;
		if (nota >= 0 && nota <= 20) { invalido = 1;
		cout << "La nota ingresada es valida"<<endl;
		}
		else { cout << "La nota es no validad , ingrese entre 0 y 20 "<<endl; }
		}
		notas[i] = nota;
		if (nota == 0) { conta_0 = conta_0 + 1; }
		if (nota == 20) { conta_20 = conta_20 + 1; }
		if (nota >= 13) { conta_apro = conta_apro + 1; }
		else{ conta_desa = conta_desa + 1; }
	}
		//imprimir
	cout << "el reporte pedido es : " << endl;
	cout << "# de personas que obtuvieron 00 : " << conta_0 << endl;
	cout << "# de personas que obtuvieron 20 : " << conta_20 << endl;
	cout << "# de personas aprobadas : " << conta_apro << endl;
	cout << "# de personas desaprobadas : " << conta_desa << endl;
	system("pause");
	}


	


