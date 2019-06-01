//operaciones con numeros grandes



#include<iostream>
#include<conio.h>

using namespace std;
void ejercicio7()
{

	int *a,*b ,*c,n,lleva;
	a = new int[20];
	b = new int[20];
	c = new int[21];
	cout << "cuantas cifras tendran los numeros" << endl;
	cin >> n;
	cout << "ingrese cifra por cifra para el primer vector"<<endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "ingrese cifra por cifra para el segundo vector" << endl;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	lleva = 0;
	for (int i = n - 1; i >= 0; i--) {
		c[i+1] = (a[i] + b[i]+lleva) % 10;
		lleva = (a[i] + b[i]) / 10;
	}
	c[0] = lleva;
	//imprimir
	cout << "la suma es:" << endl;
	cout << "\t";
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << "+" << endl;
	cout << "\t";
	for (int i = 0; i < n; i++) {
		cout << b[i];
	}
	cout << endl;
	cout << "\t";
	for (int i = 0; i < n+1; i++) {
		if (i == 0 && c[0] == 0) { cout << " "; }
		else { cout << c[i]; }
	}
	


	system("pause");
}