#include <iostream>
using namespace std;

int main() {
	float capital, ganancia, total;

	cout << "Ingrese el capital invertido: ";
	cin >> capital;

	ganancia = capital * 0.02;
	total = capital + ganancia;

	cout << "Ganancia despues de un mes: " << ganancia << endl;
	cout << "Dinero total: " << total << endl;

	return 0;
}