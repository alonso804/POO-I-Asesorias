#include <iostream>
#include <cmath>

using namespace std;

double getDistancia(int, int, int, int);
string getNombrePoligono(int);

int main(int argc, char *argv[]) {
	int vertices = 0;

	do {
		cout << "Numero de vertices: ";
		cin >> vertices;
	} while(vertices < 3 || vertices > 10);

	double perimetro = 0;

	int primer_x = 0;
	int primer_y = 0;

	int prev_x = 0;
	int prev_y = 0;

	int x = 0;
	int y = 0;

	for(int i = 1; i <= vertices; i++) {
		cout << "Vertice num " << i << endl;
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;

		if(i == 1) {
			primer_x = x;
			primer_y = y;
		} else {
			perimetro += getDistancia(x, prev_x, y, prev_y);
		}

		prev_x = x;
		prev_y = y;
	}

	perimetro += getDistancia(x, primer_x, y, primer_y);

	cout << "Es un " << getNombrePoligono(vertices) << endl;
	cout << "Su perimetro es: " << perimetro;
	
	return 0;
}

double getDistancia(int x1, int x2, int y1, int y2) {
	int xs = pow((x2 - x1), 2); // (x2 - x1) ^ 2
	int ys = pow((y2 - y1), 2); // (y2 - y1) ^ 2

	double distancia = pow(xs + ys, 0.5);

	return distancia;
}


string getNombrePoligono(int vertices) {
	string nombre = "";

	switch (vertices) {
		case 3:
			nombre = "Triangulo";
			break;
		case 4:
			nombre = "Cuadrilatero";
			break;
		case 5:
			nombre = "Pentagono";
			break;
		case 6:
			nombre = "Hexagono";
			break;
		case 7:
			nombre = "Heptagono";
			break;
		case 8:
			nombre = "Octagono";
			break;
		case 9:
			nombre = "Nonagono";
			break;
		case 10:
			nombre = "Decagono";
			break;
		default:
			nombre = "No existe";
	}

	return nombre;
}
