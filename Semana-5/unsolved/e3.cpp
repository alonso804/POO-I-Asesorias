#include <iostream>

using namespace std;

void print(int*, int);

void insertionSort(int*&, int);

int main(int argc, char *argv[]) {
	int tamano = 0;

	cout << "Ingrese tamaño: ";
	cin >> tamano;

	int* mi_array = new int[tamano];

	for(int i = 0; i < tamano; i++) {
		cin >> *(mi_array + i);
	}

	cout << "Original: ";
	print(mi_array, tamano);

	insertionSort(mi_array, tamano);
	cout << "Ordenado: ";
	print(mi_array, tamano);
	
	return 0;
}

void print(int* mi_array, int tamano) {
	cout << "{";

	for(int i = 0; i < tamano; i++) {
		cout << *(mi_array + i) << ((i == tamano - 1) ? "" : ", ");
	}

	cout << "}\n";
}

void insertionSort(int*& mi_array, int tamano) {
	int actual = 0;
	int j = 0;

	for(int i = 1; i < tamano; i++) {
		actual = *(mi_array + i); // actual = 3
		j = i - 1; // j = 0

		while(j >= 0 && *(mi_array + j) > actual) {
			*(mi_array + j + 1) = *(mi_array + j);
			j--;
		}

		*(mi_array + j + 1) = actual;
	}
}
