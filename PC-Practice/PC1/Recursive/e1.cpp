#include <iostream>

using namespace std;

void binary(int, int&);

int main(int argc, char *argv[]) {
	int number = 11;
	int binary_number = 0;

	binary(number, binary_number);

	cout << "Number: " << number << endl;
	cout << "Binary: " << binary_number << endl;
	
	return 0;
}

void binary(int number, int& binary_number) {
	if(number > 1) {
		binary(number / 2, binary_number);
	}

	int number_module = number % 2;
	binary_number = binary_number * 10 + number_module;
}
