#include <iostream>
#include <vector>
//#include "../../Helpers/prettyprint.hpp"

using namespace std;

void fillMatrix(vector<vector<int>>&, const int&, const int&);

vector<vector<int>> transpose(vector<vector<int>>&, const int&, const int&);

void print(vector<vector<int>>&, const int&, const int&);

int main(int argc, char *argv[]) {
	int rows = 0;
	int columns = 0;

	cout << "Ingrese filas y columnas: ";
	cin >> rows >> columns;

	vector<vector<int>> matrix(rows);

	fillMatrix(matrix, rows, columns);

	//cout << matrix;
	print(matrix, rows, columns);

	auto transpose_matrix = transpose(matrix, rows, columns);

	cout << endl;
	print(transpose_matrix, columns, rows);
	
	return 0;
}

void fillMatrix(vector<vector<int>>& matrix, const int& rows, const int& columns) {
	srand(time(0));

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			int random = rand() % 20 + 1;
			matrix[i].push_back(random);
		}
	}
}

vector<vector<int>> transpose(vector<vector<int>>& matrix, const int& rows, const int& columns) {
	vector<vector<int>> transpose_matrix(columns);

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			transpose_matrix[j].push_back(matrix[i][j]);
		}
	}

	return transpose_matrix;
}

void print(vector<vector<int>>& matrix, const int& rows, const int& columns) {
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}
}
