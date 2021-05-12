#include <iostream>

using namespace std;

void contarDias(unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*);
int getNumeroDeDias(int, int);

int main(int argc, char *argv[]) {
	unsigned int dia = 0;
	unsigned int mes = 0;
	unsigned int anio = 0;
	unsigned int diastTranscurridos = 0;
	unsigned int diasParaAnioNuevo = 0;

	cout << "Dia: ";
	cin >> dia;
	cout << "Mes: ";
	cin >> mes;
	cout << "Annio: ";
	cin >> anio;

	contarDias(dia, mes, anio, &diastTranscurridos, &diasParaAnioNuevo);

	cout << "Han transcurrido: " << diastTranscurridos << endl;
	cout << "Faltan para anio Nuevo: " << diasParaAnioNuevo << endl;
	
	return 0;
}

void contarDias(unsigned int dia, unsigned int mes, unsigned int anio, unsigned int* diastTranscurridos, unsigned int* diasParaAnioNuevo) {
	for(int i = 1; i < mes; ++i) {
		*diastTranscurridos += getNumeroDeDias(i, anio);
	}

	*diastTranscurridos += dia - 1;

	*diasParaAnioNuevo = ((anio % 4 == 0) ? 366 : 365) - *diastTranscurridos - 1;
} 

int getNumeroDeDias(int mes, int anio) {
	int dias = 0;
		
	switch (mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			dias = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			dias = 30;
			break;
		case 2: 
			dias = (anio % 4 == 0) ? 29 : 28;
			break;
		default:
			break;
	}

	return dias;
}
