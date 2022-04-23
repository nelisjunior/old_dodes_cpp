/*
Lab05 - Número Perfeito [Q3]

Escreva um programa que lê um número inteiro positivo e determina se esse número é perfeito ou não,
sabendo-se que um número é perfeito se ele é igual ao dobro da soma dos seus divisores.
Por exemplo 6 é perfeito, já que 2*6 = 1 + 2 + 3 + 6.
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
        cout << x << " é perfeito" << endl;
    }
    else
    {
        cout << x << " não é perfeito" << endl;
    }
    return 0;
}
