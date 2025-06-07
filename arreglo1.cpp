#include <iostream>
using namespace std;

int main() {
    int n, acum = 0,prom, busqueda, coincidencia, mayor=0, menor=0,multiplicacion=1,eliminacion;
    string decision;
    cout << "¿Cuantos numeros quieres sumar? ";
    cin >> n;
    int numeros[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero #" << (i + 1) << ": ";
        cin >> numeros[i];
        acum += numeros[i];
        multiplicacion=multiplicacion*numeros[i];
    }
     prom=acum/n;
    cout << "El resultado de la suma es: " << acum << "\n";
    cout << "el promedio de los numeros es:"<<prom<<"\n";
    cout << "la multiplicacion de los numeros es:"<<multiplicacion<<"\n";
    cout <<"que numero quiere que busque?\n";
    cin>>busqueda;
    for(int i=0; i< n; i++){
    if (busqueda==numeros[i]){
       coincidencia=true;
       break;
    }
  }
   if(coincidencia==true) {
        cout <<"su numero esta en el arreglo \n";
    }else{
        cout<<"su numero no esta en el arreglo\n";
    }


    
    cout<<"quiere saber cual es su numero mayor?(difigte si o no)\n";
    cin>>decision;
  if(decision=="si"){
    
 for(int i =0;i<n;i++){
    if(numeros[i]>mayor){
        mayor=numeros[i];
    }if (numeros[i]>menor)
    {
        numeros[i]=menor;
    }
 }
 cout<<"el numero mayor es: "<<mayor<<"\n";
 cout<<"el numero emnor es: "<<menor<<"\n"; 
}
 return 0;
}
