#include <iostream>

using namespace std;

const int CANTIDAD_NOTAS = 5;

int main(int argc, char *argv[]) {
	double* notas = new double[CANTIDAD_NOTAS];

	for(int i = 0; i < CANTIDAD_NOTAS; i++) {
		cin >> *(notas + i);
	}

	double suma = 0;
	double mayor = 0;
	double menor = 10000;

	for(int i = 0; i < CANTIDAD_NOTAS; i++) {
		suma += *(notas + i);

		if(*(notas + i) > mayor) {
			mayor = *(notas + i);
		}

		if(*(notas + i) < menor) {
			menor = *(notas + i);
		}
	}

	cout << "Promedio: " << suma / CANTIDAD_NOTAS << endl;
	cout << "Mayor: " << mayor << endl;
	cout << "Menor: " << menor << endl;
	
	delete []notas;

	return 0;
}
