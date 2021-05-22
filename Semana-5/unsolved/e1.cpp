#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string encriptar(string*);

int main(int argc, char *argv[]) {
	string contrasena = "";

	cout << "Ingrese contrasena: ";
	cin >> contrasena;

	cout << "Encriptada: " << encriptar(&contrasena) << endl;
	
	return 0;
}

string encriptar(string* contrasena) {
	string constrasena_encriptada = "";

	for(const auto& letra : *contrasena) {
		if(isdigit(letra)) {
			constrasena_encriptada += letra;
		} else {
			constrasena_encriptada += to_string(int(letra));
		}
	}

	return constrasena_encriptada;
}
