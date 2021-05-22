#include <iostream>

using namespace std;

void print(int*&, const int&);
void insertionSort(int*&, const int&);

int main(int argc, char *argv[]) {
	int size = 0;

	cout << "Insert number of elements: ";
	cin >> size;

	int* my_array = new int[size];

	for(int i = 0; i < size; i++) {
		cin >> *(my_array + i);
	}

	cout << "Original: ";
	print(my_array, size);

	insertionSort(my_array, size);
	cout << "Sorted: ";
	print(my_array, size);

	delete [] my_array;

	return 0;
}

void print(int*& my_array, const int& size) {
	cout << "{";

	for(int i = 0; i < size; i++) {
		cout << *(my_array + i) << ((i == size - 1) ? "" : ", ");
	}

	cout << "}" << endl;
}

void insertionSort(int*& my_array, const int& size) {
	int key = 0;
	int j = 0;

	for(int i = 1; i < size; i++) {
		key = *(my_array + i);
		j = i - 1;

		while(j >= 0 && *(my_array + j) > key) {
			*(my_array + j + 1) = *(my_array + j);
			j--;
		}

		*(my_array + j + 1) = key;
	}
}
