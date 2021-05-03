#include <iostream>

using namespace std;

const int row = 5;
const int column = 4;

void find(const string& id, const string matrix[][column]) {
	for(int i = 0; i < row; i++) {
		if(matrix[i][0] == id) {
			for(int j = 1; j < column; j++) {
				cout << matrix[i][j] << endl;
			}

			return;
		}
	}

	cout << "¡Producto no encontrado!\n";
}

int main(int argc, char *argv[]) {
	string products[row][column] = {
	{"H102", "Leche", "2.50", "Peru"},
	{"H103", "Pescado", "3.00", "Chile"},
	{"P122", "Huevo", "5.50", "Bolivia"},
	{"A202", "Papa", "4.70", "Brasil"},
	{"F102", "Aceite", "12.30", "Espana"}
	};

	find("H103", products);
	return 0;
}
