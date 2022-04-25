/*
Lab03 - Comandos de sele��o [Q3]
Ra�es de polin�mio de 2o. grau

Implemente um programa que receba como entrada 3 n�meros reais  diferentes de 0 referentes aos coeficientes de um polin�mio de segundo grau ax� + bx + c = 0. O programa deve exibir uma mensagem informando se o polin�mio possui 2 ra�es reais distintas, 2 ra�es reais iguais ou 2 ra�es complexas, de acordo com o valor de delta: caso delta seja positivo, o polin�mio possui duas ra�es reais distintas; caso seja negativo, o polin�mio possui duas ra�es complexas; caso seja zero, o polin�mio possui duas ra�es reais iguais. Lembre-se do valor de Delta= b� - 4ac.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    double a, b, c, delta;

    cin >> a >> b >> c;

    if (a != 0)
    {
        delta = (b * b) - (4 * a * c);
        if (delta < 0)
        {
            cout << "Duas ra�es complexas";
        }
        else if (delta > 0)
        {
            cout << "Duas ra�es reais distintas";
        }
        else
        {
            cout << "Duas ra�es reais iguais";
        }
    }

    return 0;
}