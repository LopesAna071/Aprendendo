/*
2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
*/
#include <iostream>
using namespace std;

int main(){

int numero,  operacao, i ;

cout << "Insira um valor inteiro: ";
cin >> numero;

cout << " \n1 - Adicao \n2 - Subtracao \n3 - Multiplicacao \n4 - Divisao \nEscolha a operacao:";
cin >> operacao;

switch (operacao)
{
case 1:

    for ( i = 0; i < 10; i++){
        //resultado = numero + i;
         cout << "\n"  << numero  << " + "  << i << " = " << numero + i ;
    }
    break;
case 2: 

    for (i = 0; i < 10; i++){
        //resultado = numero + i;
         cout << "\n"  << numero  << " - "  << i << " = " << numero - i ;
    }


break;

case 3:
    for (i = 0; i < 10; i++){
        //resultado = numero + i;
         cout << "\n"  << numero  << " * "  << i << " = " << numero * i ;
    }
break;

case 4: 
    for (i = 0; i < 10; i++){
        //resultado = numero + i;
         cout << "\n"  << numero  << " / "  << i << " = " << numero / i ;
    }
break;

default:

cout << "tu eh burro cara? ";
    break;
}


    return 0;
}