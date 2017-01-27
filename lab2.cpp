// viernes, 27 de enero de 2017
// Laboratorio II - Programacion III

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

// Ejercicio 1

bool triangulos(int, int, int);

double polinomios(int, double, int);

int menu();

int main()
{
	int opcion = 0;
	while(opcion != 4)
	{
		opcion = menu();
		if(opcion == 4)
			break;
		if(opcion == 1)
		{
		}
		if(opcion == 2)
		{ // Formacion de Triangulos
			int a, b, c;
			cout << "Ingrese el valor del lado A: ";
			cin >> a;
			cout << "Ingrese el valor del lado B: ";
			cin >> b;
			cout << "Ingrese el valor del lado C: ";
			cin >> c;
			
			bool formacion = triangulos(a, b, c);
			if(formacion)
				cout << "SI se puede formar un triangulo con estos lados." << endl;
			else
				cout << "NO se puede formar un triangulo con estos lados." << endl;
		}
		if(opcion == 3)
		{ // Evaluacion de Polinomios
			int version;
			cout << "2. Evaluacion de Polinomios\n";
			cout << "\t1. Ascendente\n";
			cout << "\t2. Descendente\n";
			cout << "Escoja una opcion: ";
			cin >> version;

			int grado;
			cout << "Ingrese el grado del polinomio: ";
			cin >> grado;
			
			double x;
			cout << "Ingrese el valor de X: ";
			cin >> x;

			cout << "El resultado del polinomio es: " << polinomios(grado, x, version) << endl;
		}		
	}
return 0;
}

int menu()
{
	int opcion;
	cout << "Menu - Laboratorio II\n";
		cout << "\t1. Ejercicio 1\n";
		cout << "\t2. Creacion de Triangulos\n";
		cout << "\t3. Formacion de Polinomios\n";
		cout << "\t4. Salir\n";
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

double polinomios(int grado, double x, int version)
{	
	double respuesta;
	if(version == 1)
	{ // ascendente
		int coeficientes[grado + 1];
		for(int index = 0; index <= grado; index++)
		{
			cout << "Ingrese el valor del coeficiente " << index << ": ";
			cin >> coeficientes[index];
		}
			
		for(int index = 0; index <= grado; index++)
		{
			respuesta += coeficientes[index] *(pow(x, index));
		}
	} else // descendente
	{
		int coefs[grado + 1];
		for(int index = grado; index >= 0; index--)
		{
			cout << "Ingrese el valor del coeficiente " << index << ": ";
			cin >> coefs[index];
		}
				
		for(int index = grado; index >= 0; index--)
		{
			respuesta += coefs[index] * (pow(x, index));
		}
	}
return respuesta;
}
