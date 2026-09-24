#include <iostream>
using namespace std;
 int main() {
     
     float presupuesto, gine, trauma, pedia;
     
     cout<<"Ingresa el presupuesto";
     cin>>presupuesto;
     
     gine = (presupuesto*0.40);
     trauma = (presupuesto*0.30);
     pedia = (presupuesto*0.30);
     
     cout<<"El presupuesto para ginecologia es: " <<gine;
     cout<<"El presupuesto para traumatologia es: " <<trauma;
     cout<<"El presupuesto para pediatria es: " <<pedia;
     
     
 }
