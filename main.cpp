#include <iostream>
using namespace std;
 int main() {
     
     float mat, qui, fis;
     float tarea1f, tarea2f, tarea3f, exa2;
     float tarea1m, tarea2m, tarea3m, exa1;
     float tarea1q, tarea2q, tarea3q, exa3;
     float pro1f, pro1q, pro1m;
     float notafisica, notaquimica, notamatematicas;
     float promediogene;
     
     cout<<"ingresa la primera tarea de matematicas";
     cin>>tarea1m;
     
     cout<<"Ingresa la segunda tarea de matematicas";
     cin>>tarea2m;
     
     cout<<"Ingrese la tercera tarea de matematicas";
     cin>>tarea3m;
     
     cout<<"Ingrese la nota del examen de matematicas";
     cin>>exa1;
     
     pro1m = (tarea1m+tarea2m+tarea3m)/3;
     notamatematicas = (exa1*0.90+pro1m*0.10);
     
     cout<<"Ingresa la primera nota de fisica";
     cin>>tarea1f;
     
     cout<<"Ingresa la segunda nota de fisica";
     cin>>tarea2f;
     
     cout<<"Ingresa la tercera nota de fisica";
     cin>>tarea3f;
     
     cout<<"Ingresa la nota del examen de fisica";
     cin>>exa2;
     
     pro1f = (tarea1f+tarea2f+tarea3f)/3;
     notafisica = (exa2*0.80+pro1f*0.20);
     
     cout<<"Ingresa la primera nota de quimica";
     cin>>tarea1q;
     
     cout<<"Ingresa la segunda nota de quimica";
     cin>>tarea2q;
     
     cout<<"Ingresa la tercera nota de quimica";
     cin>>tarea3q;
     
     cout<<"Ingresa la nota del examen de quimica";
     cin>>exa3;
     
     pro1q = (tarea1q+tarea2q+tarea3q)/3;
     notaquimica = (exa3*0.85+pro1q*0.15);
     
     promediogene = (notamatematicas+notafisica+notaquimica)/3;
     
     cout<<"La nota de matematicas fue : "<<notamatematicas;
     cout<<"La nota de fisica fue : "<<notafisica;
     cout<<"La nota de quimica fue : "<<notaquimica;
     cout<<"El promedio general fue : "<<promediogene;
     
     
    
    
 }