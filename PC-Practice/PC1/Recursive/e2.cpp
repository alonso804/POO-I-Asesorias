#include <iostream>

using namespace std;

void invert(int, int&);

int main(int argc, char *argv[]) {
	int inverted_number = 0;
	int number = 12345;

	invert(number, inverted_number);

	cout << "Original: " << number << endl;
	cout << "Inververted: " << inverted_number << endl;
	
	return 0;
}

void invert(int number, int& inverted_number) {
	int number_module = number % 10;
	inverted_number = inverted_number * 10 + number_module;

	if(number > 10){
		invert(number / 10, inverted_number);
	}
}
