/*
Lab03 - comandos de seleção [Q4]
Pessoa mais velha

Implemente um programa que receba como entrada dois pares compostos por um número inteiro e um caractere, nesta ordem. O primeiro par corresponde ao ano de nascimento e sexo de uma primeira pessoa e o segundo par às mesmas informações de uma segunda pessoa. O programa deve informar o sexo da pessoa mais velha. Caso as duas pessoas possuam a mesma idade, o programa deve informar se elas têm sexos iguais ou diferentes, com as frases "Pessoas de mesma idade mas sexos diferentes" ou "Pessoas de mesma idade e sexo" conforme o caso.

*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int idadep1, idadep2;
    char sexop1, sexop2;
    string m="masculino", f="feminino";

    cin >> idadep1 >> sexop1;
    cin >> idadep2 >> sexop2;


    if (idadep1 == idadep2)
    {
        if (sexop1 == sexop2)
        {
            cout << "Pessoas de mesma idade e sexo";
        }
        else
        {
            cout << "Pessoas de mesma idade mas sexos diferentes";
        }
    }
    else if (idadep1 < idadep2)
    {
        switch(sexop1){
            case 'm':
            cout << "Pessoa do sexo " << m << " e mais velha" << endl;
            break;
            case 'f':
            cout << "Pessoa do sexo " << f << " e mais velha" << endl;
            break;
        }
        
    }
    else
    {
        switch(sexop2){
            case 'm':
            cout << "Pessoa do sexo " << m << " e mais velha" << endl;
            break;
            case 'f':
            cout << "Pessoa do sexo " << f << " e mais velha" << endl;
            break;
        }
    }

    return 0;
}