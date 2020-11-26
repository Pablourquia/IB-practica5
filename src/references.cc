#include <iostream>
using namespace std;

int main (){
   int valor_entero =10;
   int& referencia_entero = valor_entero;
   cout << " El valor de la referencia int es " << referencia_entero << endl;

   double valor_decimal = 1.2;
   double& referencia_decimal = valor_decimal;
   cout << "El valor de la referencia double es " << referencia_decimal << endl;

   float valor_decimal2 = 1.4;
   float& referencia_decimal2 = valor_decimal2;
   cout << "El valor de la referencia float " << referencia_decimal2 << endl;

   char caracter_1 = 'h' ;
   char& referencia_caracter1 = caracter_1;
   cout << "El valor de la referencia char es " << referencia_caracter1 << endl;

   return 0;

}