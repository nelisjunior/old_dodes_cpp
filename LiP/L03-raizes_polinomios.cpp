/*
Lab03 - Comandos de seleção [Q3]
Raíes de polinômio de 2o. grau

Implemente um programa que receba como entrada 3 números reais  diferentes de 0 referentes aos coeficientes de um polinômio de segundo grau ax² + bx + c = 0. O programa deve exibir uma mensagem informando se o polinômio possui 2 raíes reais distintas, 2 raíes reais iguais ou 2 raíes complexas, de acordo com o valor de delta: caso delta seja positivo, o polinômio possui duas raíes reais distintas; caso seja negativo, o polinômio possui duas raíes complexas; caso seja zero, o polinômio possui duas raíes reais iguais. Lembre-se do valor de Delta= b² - 4ac.
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
            cout << "Duas raíes complexas";
        }
        else if (delta > 0)
        {
            cout << "Duas raíes reais distintas";
        }
        else
        {
            cout << "Duas raíes reais iguais";
        }
    }

    return 0;
}