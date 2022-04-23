/*
Lab04 - Soma dos dígitos
Escreva uma função que receba um valor inteiro e retorne o número com seus dígitos invertidos. Por exemplo, dado o número 7631, a função deve retornar 1367.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int x, aux, soma = 0, resto;

    cin >> x;
    aux = x;

    while (aux != 0)
    {
        resto = aux % 10;
        aux = (aux - resto) / 10;
        soma = soma + resto;
        cout << "resto: " << resto << endl;
        cout << "x: " << x << endl;
        cout << "soma: " << soma << endl;
    }
    cout << "A soma dos d�gitos de: " << x << " foi " << soma << endl;

    return 0;
}
