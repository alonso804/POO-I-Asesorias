#include <iostream>
#include <vector>

using namespace std;

const double APPROVE_GRADE = 10.5;

int main(int argc, char *argv[]) {
	vector<double> grades = {7, 2, 10.5, 12, 18, 20, 12.9, 13.1};

	double average = 0;
	int approved = 0;
	int count = 0;
	double sum = 0;

	for(auto grade : grades) {
		if(grade >= APPROVE_GRADE) {
			approved++;
		}
		
		sum += grade;
		count++;
	}

	average = sum / count;

	cout << "Aprobados: " << approved << endl;
	cout << "Promedio: " << average << endl;

	return 0;
}
