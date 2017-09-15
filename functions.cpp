#include <iostream>
using namespace std;

int suma(int a, int b) {  //declarar funcion de suma
  return a+b;
 }
int resta(int a, int b) { //declarar funcion de resta
  return a-b;
 }
int multi(int a, int b) { //declarar funcion de multiplicacion
  return a*b;
 }
int dividir(int a, int b) { //declarar funcion de multiplicacion
  return a/b;
 }
 int rem(int a, int b) { //declarar funcion de residuo
   return a%b;
 }

  int main (){

    int a,b;
    cout<<"Please enter the first number"<<endl;
    cin>> a;
    cout<< "Please enter the second number"<<endl;
    cin>> b;
    cout<<"The sum of your two numbers is: "<<suma(a,b)<<endl;
    cout<<"The multiplication of your two numbers is: "<<multi(a,b)<<endl;
    cout<<"The integer division between your two numbers is: "<<dividir(a,b)<<endl;
    cout<<"The remainder of the divisioin between your two numbers is: "<<rem(a,b)<<endl;

    return 0;
  }
