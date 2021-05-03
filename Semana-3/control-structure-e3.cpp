#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	string text = "Hola como te encuentras";

	for(int i = 0; i < text.size(); ++i) {
		switch (text[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': 
				text[i] = toupper(text[i]);
				break;
			case ' ':
				text[i] = '_';
			default: break;
		}
	}

	cout << text << endl;

	return 0;
}
