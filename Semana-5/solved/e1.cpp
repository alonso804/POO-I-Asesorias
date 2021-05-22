#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string encrypt(string*);

int main(int argc, char *argv[]) {
	string password = "";

	cout << "Password: ";
	cin >> password;

	cout << "Encrypted password: " << encrypt(&password) << endl;
	
	return 0;
}

string encrypt(string* password) {
	string encrypted_password = "";

	for(const auto& letter : *password) {
		if(!isdigit(letter)) {
			encrypted_password += to_string(int(letter));
		} else {
			encrypted_password += letter;
		}
	}

	return encrypted_password;
}
