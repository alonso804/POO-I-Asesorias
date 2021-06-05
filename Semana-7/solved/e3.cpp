#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

double distance(const int&, const int&, const int&, const int&);

int main(int argc, char *argv[]) {
	int vertexes = 0;

	do {
		cout << "Ingrese la cantidad de vértices del polígono: ";
		cin >> vertexes;
	} while(vertexes < 3);

	vector<pair<int, int>> points;
	int x = 0;
	int y = 0;

	for(int i = 0; i < vertexes; i++) {
		cout << "[" << i << "]:" << endl;
		cout << "\tx: ";
		cin >> x;
		cout << "\ty: ";
		cin >> y;

		points.push_back(make_pair(x, y));
	}

	double perimeter = 0;
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	for(int i = 0; i < vertexes - 1; i++) {
		x1 = points[i].first;
		x2 = points[i + 1].first;

		y1 = points[i].second;
		y2 = points[i + 1].second;

		perimeter += distance(x1, x2, y1, y2);
	}

	x1 = points[0].first;
	x2 = points[vertexes - 1].first;

	y1 = points[0].second;
	y2 = points[vertexes - 1].second;

	perimeter += distance(x1, x2, y1, y2);

	cout << perimeter << endl;
	
	return 0;
}

double distance(const int& x1, const int& x2, const int& y1, const int& y2) {
	int xs = pow((x2 - x1), 2);
	int ys = pow((y2 - y1), 2);

	return pow(xs + ys, .5);
}
