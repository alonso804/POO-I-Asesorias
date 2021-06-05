#include <iostream>
#include <vector>
#include <unordered_map>
#include "../../Helpers/prettyprint.hpp"

using namespace std;

void fillMatrix(vector<vector<int>>&, const int&, const int&);

void printMap(const unordered_map<int, int>&);

int main(int argc, char *argv[]) {
	int rows = 0;
	int columns = 0;

	cout << "Ingrese filas y columnas: ";
	cin >> rows >> columns;
	
	vector<vector<int>> matrix(rows);

	fillMatrix(matrix, rows, columns);

	unordered_map<int, int> count;

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			if(!count[matrix[i][j]]) {
				count[matrix[i][j]] = 1;
			} else {
				count[matrix[i][j]]++;
			}
		}
	}

	cout << matrix << endl;
	cout << "\n";
	//cout << count << endl;
	printMap(count);
	
	return 0;
}

void fillMatrix(vector<vector<int>>& matrix, const int& rows, const int& columns) {
	srand(time(0));

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			int random = rand() % 10 + 1;
			matrix[i].push_back(random);
		}
	}
}

void printMap(const unordered_map<int, int>& count) {
	for(auto c : count) {
		cout << c.first << " -> " << c.second << endl;
	}
}
