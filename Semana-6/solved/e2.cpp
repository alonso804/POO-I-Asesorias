#include <iostream>
#include <ctime>

using namespace std;

void initialize(int**&, const int&, const int&);

void fillMatrix(int**&, const int&, const int&);

int** transpose(int**&, const int&, const int&);

void print(int**&, const int&, const int&);

void deleteMaxtrix(int**&, const int&, const int&);

int main(int argc, char *argv[]) {
	int rows = 0;
	int columns = 0;

	cout << "Ingrese filas y columnas: ";
	cin >> rows >> columns;

	int** matrix = new int*[rows];

	fillMatrix(matrix, rows, columns);

	print(matrix, rows, columns);

	auto transpose_matrix = transpose(matrix, rows, columns);

	cout << endl;

	print(transpose_matrix, columns, rows);

	deleteMaxtrix(matrix, rows, columns);
	deleteMaxtrix(transpose_matrix, columns, rows);

	return 0;
}

void initialize(int**& matrix, const int& rows, const int& columns) {
	for(int i = 0; i < rows; i++) {
		matrix[i] = new int[columns];
	}
}

void fillMatrix(int**& matrix, const int& rows, const int& columns) {
	initialize(matrix, rows, columns);

	srand(time(0));

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			int random = rand() % 20 + 1;
			matrix[i][j] = random;
		}
	}
}

int** transpose(int**& matrix, const int& rows, const int& columns) {
	int** transpose_matrix = new int*[columns];

	initialize(transpose_matrix, columns, rows);

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			transpose_matrix[j][i] = matrix[i][j];
		}
	}

	return transpose_matrix;
}

void print(int**& matrix, const int& rows, const int& columns) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}
}

void deleteMaxtrix(int**& matrix, const int& rows, const int& columns) {
	for(int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}

	delete[] matrix;
}
