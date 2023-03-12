#include <iostream>
using namespace std;


/*
3. Fazer um programa que solicita um número decimal e imprime o
   correspondente em hexa e octal.
*/

int main(){
int numero;

cout << "Digite um numero inteiro: ";
cin >> numero;

cout << hex << numero << endl;
cout << oct << numero << endl;


    return 0;
}