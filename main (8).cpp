#include <iostream>
using namespace std;

int main() {
    float sueldoBase;
    float venta1, venta2, venta3;
    float comision, totalVentas, sueldoTotal;

    cout << "Ingrese el sueldo base: ";
    cin >> sueldoBase;

    cout << "Ingrese la venta 1: ";
    cin >> venta1;

    cout << "Ingrese la venta 2: ";
    cin >> venta2;

    cout << "Ingrese la venta 3: ";
    cin >> venta3;

    totalVentas = venta1 + venta2 + venta3;
    comision = totalVentas * 0.10;
    sueldoTotal = sueldoBase + comision;

    cout << "Comision obtenida: " << comision << endl;
    cout << "Sueldo total del mes: " << sueldoTotal << endl;

    return 0;
}