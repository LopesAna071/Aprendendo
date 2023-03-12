/*
1. Fazer um programa em C que pergunta um valor em metros e imprime o
   correspondente em decímetros, centímetros e milímetros.
*/
#include <iostream>
using namespace std;
int main()
{

    int numero;
    float decimetro, centimetro, milimetro;

    cout << "Insira um valor a ser convertido em outras medidas";
    cin >> numero;

    decimetro = numero * 10;
    centimetro = numero * 100;
    milimetro = numero * 1000;

    cout << "Decimetro: " << decimetro << "\nCentimetro: " << centimetro << "\nMilimetro: " << milimetro;

    return 0;
}