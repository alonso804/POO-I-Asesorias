#include <iostream>
#include <cmath>

using namespace std;

double distance(int, int, int, int);
string getPolygon(int);

int main(int argc, char *argv[]) {
  int vertexes = 0;
  do {
    cout << "Numero de vertices: ";
    cin >> vertexes;
  } while (vertexes < 3 || vertexes > 10);

  int temp_x = 0;
	int temp_y = 0;
	int x = 0;
	int y = 0;
	double perimeter = 0;
	int first_x = 0;
	int first_y = 0;

	for (int i = 0; i < vertexes; ++i) {
		cout << "Vertice num " << i + 1 << endl;
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;

		if (i != 0) {
			perimeter += distance(x, temp_x, y, temp_y);
		} else {
			first_x = x;
			first_y = y;
		}

		temp_x = x;
		temp_y = y;
	}

	perimeter += distance(x, first_x, y, first_y);

	cout << "Es un " << getPolygon(vertexes) << endl;
	cout << "Su perimetro es: " << perimeter << endl;

  return 0;
}

double distance(int x1, int x2, int y1, int y2) {
	int xs = pow((x2 - x1), 2);
	int ys = pow((y2 - y1), 2);

	return pow(xs + ys, .5);
}

string getPolygon(int vertexes) {
	string polygon = "";
	switch (vertexes) {
		case 3:
			polygon = "Triangulo";
			break;
		case 4:
			polygon = "Cuadrilatero";
			break;
		case 5:
			polygon = "Pentagono";
			break;
		case 6:
			polygon = "Hexagono";
			break;
		case 7:
			polygon = "Heptagono";
			break;
		case 8:
			polygon = "Octagono";
			break;
		case 9:
			polygon = "Nonagono";
			break;
		case 10:
			polygon = "Decagono";
			break;
		default:
			polygon = "No existe";
			break;
	};
	
	return polygon;
}
