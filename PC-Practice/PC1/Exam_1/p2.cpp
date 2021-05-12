#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int days = 0;
	int sum = 0;
	int max = 0;
	int count_cold = 0;
	int count_mild = 0;
	int count_hot = 0;
	int current_temperature = 0;

	cout << "Numero de dias: ";
	cin >> days;
	
	for(int i = 1; i <= days; ++i) {
		cout << "Temperatura del dia " << i << ": ";
		cin >> current_temperature;

		sum += current_temperature;

		if(max < current_temperature) {
			max = current_temperature;
		}

		if(current_temperature <= 15) {
			count_cold++;
		} else if(current_temperature <= 21) {
			count_mild++;
		} else {
			count_hot++;
		}
	}

	double average = sum / double(days);

	cout << "Reporte" << endl;
	cout << "Temperatura Promedio: " << average << endl; 
	cout << "Temperatura Maxima: " << max << endl; 
	cout << "Dias Frios     [temp menor a 16 grados]: " << count_cold << endl; 
	cout << "Dias Templados [temp >15 - 21 grados]  : " << count_mild << endl; 
	cout << "Dias Calurosos [temp mayor a 21 grados]: " << count_hot << endl; 
	
	return 0;
}
