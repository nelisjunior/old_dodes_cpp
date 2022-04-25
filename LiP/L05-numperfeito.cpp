/*
Lab05 - N�meromero Perfeito [Q3]

Escreva um programa que ler um n�mero inteiro positivo e determina se esse n�mero � perfeito ou n�o,
sabendo-se que um n�mero � perfeito se ele � igual ao dobro da soma dos seus divisores.
Por exemplo 6 � perfeito, j� que 2*6 = 1 + 2 + 3 + 6.
*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;
    double perfeito, verificador;

    cin >> x;

    verificador = 2 * x;

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            perfeito += i;
        }
        else
        {
            continue;
        }
    }
    if (perfeito == verificador)
    {
        cout << x << " � perfeito" << endl;
    }
    else
    {
        cout << x << " n�o � perfeito" << endl;
    }
    return 0;
}
