/*
Lab02 Operadores e expressões
converte_segundos

Escreva um programa que recebe um número inteiro em segundos e retorna o tempo em dias, horas, minutos e segudos.
*/

#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int x = 0, s = 0, m = 0, h = 0, d = 0, resto = 0;

  cin >> x;

  d = x / 86400;
  resto = x % 86400;
  h = resto / 3600;
  resto = resto % 3600;
  m = resto / 60;
  s = resto % 60;

  cout << x << " segundos é igual: \n" << d << " dias, " << h << " horas, " << m << " minutos e " << s << " segundos. " << endl;

  return 0;
}