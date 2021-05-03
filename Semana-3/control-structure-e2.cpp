#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
	string password = "";
	string confirm_password = "";
	int attempts = 3;

	cout << "Ingrese su contrasena: ";
	getline(cin, password, '\n');

	while(attempts > 0) {
		cout << "Confirme su contrasena: ";
		getline(cin, confirm_password, '\n');

		if(password == confirm_password) {
			cout << "¡Contrasena confirmada!" << endl;
			break;
		}

		attempts--;
		cout << "¡Contrasena incorrecta! Le quedan " << attempts << " intentos" << endl;
	}

	return 0;
}
