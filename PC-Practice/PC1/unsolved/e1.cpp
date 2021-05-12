#include <iostream>
#include <string>

using namespace std;

bool isIgual(int);
// valor_retorno nombre_funcion(parametros)

int main(int argc, char *argv[]) {
	int numero = 0;

	do {
		cout << "Numero > 10: ";
		cin >> numero;
	} while(numero <= 10);

	for(int i = 11; i <= numero; ++i) {
		if(isIgual(i)) {
			cout << i << endl;
		}
	}

	return 0;
}

// 0 1 2 3
// [0 1 2 3]
// str = "Hola"
// str[0] = "H"
// str[1] = "o"
// str[2] = "l"
// str[3] = "a"

bool isIgual(int numero) {
	string str_numero = to_string(numero);

	// 8    8   8
	//[0]  [1] [2]
	for(int i = 1; i < str_numero.size(); ++i) {
		if(str_numero[i] != str_numero[i - 1]) {
			return false;
		}
	}

	return true;
}
