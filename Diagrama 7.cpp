#include <iostream>
using namespace std;
 int main() {
      
      float pesos, tasa;
      float dolares;
      
      cout<<"Ingresa la cantidad de pesos";
      cin>>pesos;
      
      cout<<"Ingresa el precio de la moneda de cambio";
      cin>>tasa;
      
      dolares = (pesos/tasa);
      
      cout<< "La tasa de cambio es:" << dolares;
      
     
     
 }
