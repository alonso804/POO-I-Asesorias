#include <iostream>

using namespace std;

void fizzbuzz(int number) {
	for(int i = 1; i <= number; i++) {
		if(i % 3 == 0 && i % 5 == 0) {
			cout << "FizzBuzz ";
		} else if(i % 3 == 0) {
			cout << "Fizz ";
		} else if(i % 5 == 0) {
			cout << "Buzz ";
		} else {
			cout << i << " ";
		}
	}
}

int main(int argc, char *argv[]) {
	int number = 0;

	cout << "Ingrese un numero: ";
	cin >> number;

	fizzbuzz(number);
	
	return 0;
}
