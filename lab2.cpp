// viernes, 27 de enero de 2017
// Laboratorio II - Programacion III

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Ejercicio 1

bool triangulos(int, int, int);

double polinomios(int, int);

int menu();

int main()
{
return 0;
}

int menu()
{
	int opcion;
	cout << "Menu - Laboratorio II\n";
		cout << "\t1. Ejercicio 1\n";
		cout << "\t2. Creacion de Triangulos\n";
		cout << "\t3. Evaluacion de Polinomios\n";
	cout << "Escoja una opcion: ";
	cin >> opcion;
return opcion;
}

// Ejercicio 1

bool triangulos(int a, int b, int c)
{
	if(a + b > c && a + c > b && b + c > a)
		return true;
	else
		return false;
}
