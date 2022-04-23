/*
Lab05 - Potenciação [Q1]
Escreva um programa que leia dois números inteiros b e e, denotando respectivamente uma base e um expoente.
O programa deve imprimir na tela o valor da operação b^e.
(potenciação).
*/
#include <iostream>

using namespace std;

int main(){

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
        

        cout << result << endl;

        return 0;
    }