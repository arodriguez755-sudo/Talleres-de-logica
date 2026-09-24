#include <iostream>
using namespace std;

int main() {
    float compra, descuento, total;

    cout << "Ingrese el valor de la compra: ";
    cin >> compra;

    descuento = compra * 0.15;
    total = compra - descuento;

    cout << "Descuento: " << descuento << endl;
    cout << "Total a pagar: " << total << endl;

    return 0;
}
