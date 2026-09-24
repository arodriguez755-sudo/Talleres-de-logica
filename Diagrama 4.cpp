#include <iostream>
using namespace std;
 int main(){
     
     float parcial1, parcial2, parcial3;
     float examen, trabajos;
     float promedioparciales, notafinal;
     
     cout<<"Ingrese la nota del parcial 1";
     cin>>parcial1;
     
     cout<<"Ingrese la nota del parcial 2";
     cin>>parcial2;
     
     cout<<"Ingrese la nota del parcial 3";
     cin>>parcial3;
     
     cout<<"Ingrese la nota del examen";
     cin>>examen;
     
     cout<<"Ingresa la nota de los trabajos";
     cin>>trabajos;
     
     promedioparciales = (parcial1 + parcial2 + parcial3) / 3;
     notafinal = (promedioparciales*0.55) + (examen*0.30) + (trabajos*0.15);
     
     cout<< "promedioparciales." << promedioparciales;
     cout<< "notafinal." << notafinal; 
     
     return 0;
     
 }
