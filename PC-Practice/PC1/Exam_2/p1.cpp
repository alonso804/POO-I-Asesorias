#include <iostream>
#include <string>

using namespace std;

bool areEquals(string);

int main(int argc, char *argv[]) {
	int number = 0;

	do {
		cout << "Numero > 10: ";
		cin >> number;
	} while (number <= 10);

	for(int i = 11; i <= number; i++) {
		string str_i = to_string(i);

		if(areEquals(str_i)) {
			cout << str_i << endl;
		}
	}
	
	return 0;
}

bool areEquals(string number) {
		for(int j = 0; j < number.size() - 1; j++) {
			if(number[j] != number[j + 1]) {
				return false;
			}
		}

		return true;
}
