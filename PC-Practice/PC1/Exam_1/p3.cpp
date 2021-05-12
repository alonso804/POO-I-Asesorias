#include <iostream>

using namespace std;

void misPrimos(long long int, long long int*, long long int*);
bool isPrimo(long long int);

int main(int argc, char *argv[]) {
	long long int num = 0;
	long long int anteriorPrimo = 0;
	long long int sigPrimo = 0;

	do {
		cout << "Numero [mayor a 10] : ";
		cin >> num;
	} while(num <= 10);

	misPrimos(num, &anteriorPrimo, &sigPrimo);

	cout << "El siguiente numero primo es: " << sigPrimo << endl;
	cout << "El anterior numero primo es: " << anteriorPrimo << endl;

	return 0;
}

bool isPrimo(long long int number) {
	if(number == 2) {
		return true;
	}

	for(long long int i = 2; i < number; i++) {
		if(number % i == 0) {
			return false;
		}
	}

	return true;
}

void misPrimos(long long int num, long long int* anteriorPrimo, long long int* sigPrimo) {
	for(long long int i = num + 1; ; i++) {
		if(isPrimo(i)) {
			*sigPrimo = i;
			break;
		}
	}

	for(long long int i = num - 1; ; i--) {
		if(isPrimo(i)) {
			*anteriorPrimo = i;
			break;
		}
	}
}
