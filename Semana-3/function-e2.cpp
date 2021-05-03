#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double calculate_average(vector<double> grades, vector<double> percentage) {
	double average = 0;

	for(int i = 0; i < percentage.size(); i++) {
		average += grades[i] * percentage[i];
	}

	return average;
}

void get_grades(double& ef, double& pc, double& tg) {
	cout << "EF: ";
	cin >> ef;

	cout << "PC: ";
	cin >> pc;

	cout << "TG: ";
	cin >> tg;
}

int main(int argc, char *argv[]) {
	vector<double> percentage = {0.3, 0.3, 0.4};
	vector<double> grades;

	double ef = 0;
	double pc = 0;
	double tg = 0;

	get_grades(ef, pc, tg);
	grades.push_back(ef);
	grades.push_back(pc);
	grades.push_back(tg);

	double average = calculate_average(grades, percentage);
	cout << average << endl;
	
	return 0;
}
