/*
Lab02 Operadores e expressões
Retorna Inteiro

Crie um programa que receba um valor em decimal do usuário, e retorna a parte inteira e a parte fracionária deste número. Assuma que o usuário pode digitar um valor positivo ou negativo como entrada.
*/

#include <iostream>

using namespace std;

int main() {

    float x=0, fracao=0;
    int inteiro=0;

    cin >> x;

    inteiro = x / 10;

    fracao = x%10;


  return 0;
}