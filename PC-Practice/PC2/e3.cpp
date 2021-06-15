#include <iostream>
#include <vector>

using namespace std;

class producto_t {
	string name;	
	double price;	
	char currency;	
	double exchange;	

public:
	producto_t() {}

	producto_t(string name, double price, char currency, double exchange) {
		this->name = name;
		this->price = price;
		this->currency = currency;
		this->exchange = exchange;
	}

	string get_name() {
		return this->name;
	}

	double get_price(char currency) {
		if(currency == 'S') {
			return this->price;
		}

		return this->price * exchange;
	}

	char get_currency() {
		return this->currency;
	}
};

int main(int argc, char *argv[]) {
	int n = 0;
	vector<producto_t> productos;
	string name;	
	double price;	
	char currency;	
	double exchange;	

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> name >> currency >> exchange >> price;
		producto_t producto = producto_t(name, price, currency, exchange);
		productos.push_back(producto);
	}

	double total = 0;
	
	for(auto producto : productos) {
		double precio = producto.get_price(producto.get_currency());
		total += precio;
		cout << producto.get_name() << " - " << precio << endl;
	}
	
	cout << "Total = " << total << endl;

	return 0;
}
