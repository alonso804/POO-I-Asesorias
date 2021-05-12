#include <iostream>

using namespace std;

void binario(int, int&);

int main(int argc, char *argv[]) {
	int numero = 11;
	int respuesta = 0;

	binario(numero, respuesta);

	cout << "Numero: " << numero << endl;
	cout << "Binario: " << respuesta << endl;
	
	return 0;
}

void binario(int numero, int& respuesta) {
	if(numero > 1) {
		binario(numero / 2, respuesta);
	}

	// 0
	// 1
	//
	// 10 + 0 = 10
	// 100 + 1 = 101
	// 1010 + 1 = 1011
	int modulo = numero % 2;
	respuesta = respuesta * 10 + modulo;
}
