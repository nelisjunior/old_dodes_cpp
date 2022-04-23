/*
Lab04 - Calcula valor de exponecial [Q1]
Escreva um programa que estima o valor de e² usando a expressão a seguir:
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double fatorial(int x, int n)
{
    double fatn = n;

    for (int i = 1; i <= n; i++)
    {
        fatn = fatn * (fatn - i);
        // soma+=(pow(x,i)/fatn);
    }
    return fatn;
}

double euler(int x, int n, double fatn)
{
    double soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += (pow(x, i) / fatn);
    }

    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int x = 0, n = 0;
    double e, fatn = 0;

    cout << "Informe o valor de X: " << endl;
    cin >> x;
    cout << "Informe o valor de n: " << endl;
    cin >> n;

    if (n == 0 || n == 1)
    {
        e = 1 + pow(x, 1) / 1;
    }
    else
    {
        e = 1 + euler(x, n, fatn);
    }

    cout << "Para N = " << n << "; e^x = " << setprecision(7) << e << endl;

    return 0;
}
