/*
Lab03 - Comandos de seleção [Q3]
Raízes de polinômio de 2o. grau

Implemente um programa que receba como entrada 3 números reais  diferentes de 0 referentes aos coeficientes de um polinômio de segundo grau ax² + bx + c = 0. O programa deve exibir uma mensagem informando se o polinômio possui 2 raízes reais distintas, 2 raízes reais iguais ou 2 raízes complexas, de acordo com o valor de delta: caso delta seja positivo, o polinômio possui duas raízes reais distintas; caso seja negativo, o polinômio possui duas raízes complexas; caso seja zero, o polinômio possui duas raízes reais iguais. Lembre-se do valor de Delta= b² - 4ac.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, delta;

    cin >> a >> b >> c;

    if(a!=0){
        delta=(b*b)-(4*a*c);
        if(delta<0){
            cout << "Duas raizes complexas";
        }
        else if(delta>0){
            cout << "Duas raizes reais distintas";
        }
        else{
            cout << "Duas raizes reais iguais";
        }
    }

  return 0;
}