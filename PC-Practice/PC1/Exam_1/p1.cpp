#include <iostream>
#include <string>

using namespace std;

void getPalindromics(string);
bool isPalindromic(string);

int main(int argc, char *argv[]) {
	string number = "";

	do {
		cout << "Numero > 10: ";
		cin >> number;
	} while (stoi(number) < 11);

	getPalindromics(number);
	
	return 0;
}

void getPalindromics(string number) {
	for(int i = 11; i <= stoi(number); i++) {
		if(isPalindromic(to_string(i))) {
			cout << i << endl;
		}
	}
}

bool isPalindromic(string number) {
	for (int i = 0, j = number.size() - 1; i < number.size() / 2 && j >= number.size() / 2; i++, j--) {
		if(number[i] != number[j]) {
			return false;
		}
	}

	return true;
}
