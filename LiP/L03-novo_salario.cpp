/*
Lab03 - Comandos de seleção
Salario e cargo de um funcionario

Utilizando if-else, faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    string cargo, um = "Escriturario", dois = "Secretario", tres = "Caixa", quatro = "Gerente", cinco = "Diretor";

    float salario, aumento, novosalario;

    int codigo;

    cin >> codigo >> salario;

    if (codigo == 1)
    { // Escriturário
        cargo = um;
        aumento = salario * 0.5;
        novosalario = salario + aumento;

        cout << cargo << "\nAumento: " << aumento << "\nNovo salario: " << novosalario << endl;
    }
    else if (codigo == 2)
    { // Secretario
        cargo = dois;
        aumento = salario * 0.35;
        novosalario = salario + aumento;

        cout << cargo << "\nAumento: " << aumento << "\nNovo salario: " << novosalario << endl;
    }
    else if (codigo == 3)
    { // caixa
        cargo = tres;
        aumento = salario * 0.20;
        novosalario = salario + aumento;

        cout << cargo << "\nAumento: " << aumento << "\nNovo salario: " << novosalario << endl;
    }
    else if (codigo == 4)
    { // gerente
        cargo = quatro;
        aumento = salario * 0.10;
        novosalario = salario + aumento;

        cout << cargo << "\nAumento: " << aumento << "\nNovo salario: " << novosalario << endl;
    }
    else if (codigo == 5)
    { // diretor
        cargo = cinco;
        novosalario = salario + aumento;

        cout << cargo << "\nAumento: "
             << "sem aumento"
             << "\nNovo salario: " << novosalario << endl;
    }

    return 0;
}