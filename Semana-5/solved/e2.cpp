#include <iostream>

using namespace std;

const int TOTAL_GRADES = 5;

void getData(double*&);

int main(int argc, char *argv[]) {
	double* grades = new double[100];

	getData(grades);

	double sum = 0;
	double greater = 0;
	double less = 10000;

	for(int i = 0; i < TOTAL_GRADES; i++) {
		sum += *(grades + i);

		if(greater < *(grades + i)) {
			greater = *(grades + i);
		}

		if(less > *(grades + i)) {
			less = *(grades + i);
		}
	}

	cout << "Average: " << sum / TOTAL_GRADES << endl;
	cout << "Greater: " << greater << endl;
	cout << "Less: " << less << endl;

	delete []grades;
	
	return 0;
}

void getData(double*& grades) {
	int i = 0;

	do {
		cin >> *(grades + i);
		i++;
	} while(i < TOTAL_GRADES);
}
