/*
Lab05 - Potencia��o [Q1]
Escreva um programa que leia dois n�meros inteiros b e e, denotando respectivamente uma base e um expoente.
O programa deve imprimir na tela o valor da opera��o b^e.
(potencia��o).
*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int b, e;
    double result;

        cin >> b >> e;

        if(e!=0){
            for(int i=1; i<=e;i++){
            result=(b*i);
            result*=result;
            }
        }
        else{
            
            result = 1;
        }
        

        cout << "Resultado de " << b << "^" << e << " = " << result << endl;

        return 0;
    }