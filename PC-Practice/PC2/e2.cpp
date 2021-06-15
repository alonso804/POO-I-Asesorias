#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

#include "prettyprint.hpp"

using namespace std;

vector<string> obtener_palabras(const string& palabra) {
	vector<string> resultado;

	string temporal = "";

	for(const auto& letra : palabra) {
		if(letra == ' ' || letra == '.' || letra == ',') {
			if(temporal != "") {
				resultado.push_back(temporal);
			}

			temporal = "";
		} else {
			temporal += letra;
		}
	}

	resultado.push_back(temporal);
	
	string menor_palabra = resultado[0];

	for(const auto& p : resultado) {
		if(menor_palabra.size() > p.size()) {
			menor_palabra = p;
		}
	}

	sort(resultado.begin(), resultado.end());

	auto it = find(resultado.begin(), resultado.end(), menor_palabra);
	int index = it - resultado.begin();

	for(int i = index; i > 0; i--) {
		swap(resultado[i], resultado[i - 1]);
	}

	return resultado;
}

int main(int argc, char *argv[]) {
	string palabra = "";
	//string palabra = "este es un mensaje de prueba";

	getline(cin, palabra);

	auto respuesta = obtener_palabras(palabra);

	cout << respuesta << endl;

	return 0;
}
