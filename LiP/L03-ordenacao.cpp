/*
Lab03 - Comandos de seleção
Ordenação

Faça um programa que receba quatro valores: I, A, B, C. Desses valores I é inteiro e positivo, A, B e C são reais. Utilizando a estrutura de seleção switch-case, escreva os números A, B e C obedecendo à tabela a seguir: 

Valor de I    |                Saída
    1         |   A, B, e C em ordem crescente
    2         |   A, B e C em ordem decrescente       
    3         |   O maior fica entre os dois números
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long int i;
    double A,B,C;

    cin >> i >> A >> B >> C;

    switch(i)
    {
        case 1:
            if(A<B){
                    if(B<C){
                        cout << "A ordem crescente dos números é: " << A << " " << B << " " << C;
                    }
                    else{
                        cout << "A ordem crescente dos números é: " << A << " " << C << " " << B;
                    }
            }
            else if(B<A){
                    if(A<C){
                        cout << "A ordem crescente dos números é: " << B << " " << A << " " << C;
                    }
                    else{
                        cout << "A ordem crescente dos números é: " << B << " " << C << " " << A;
                    }
            }
            else if(C<A){
                    if(B<A){
                        cout << "A ordem crescente dos números é: " << C << " " << B << " " << A;
                    }
                    else{
                        cout << "A ordem crescente dos números é: " << C << " " << A << " " << B;
                    }
            }
        break;
        case 2:
            if(A>B){
                    if(B>C){
                        cout << "A ordem decrescente dos números é: " << A << " " << B << " " << C;
                    }
                    else{
                        cout << "A ordem decrescente dos números é: " << A << " " << C << " " << B;
                    }
            }
            else if(B>A){
                    if(A>C){
                        cout << "A ordem decrescente dos números é: " << B << " " << A << " " << C;
                    }
                    else{
                        cout << "A ordem decrescente dos números é: " << B << " " << C << " " << A;
                    }
            }
            else if(C>A){
                    if(B>A){
                        cout << "A ordem decrescente dos números é: " << C << " " << B << " " << A;
                    }
                    else{
                        cout << "A ordem decrescente dos números é: " << C << " " << A << " " << B;
                    }
            }
        break;

        case 3:
            if(A>B && A>C){
                    if(B>C){
                        cout << "A ordem desejada é: " << C << " " << A << " " << B;
                    }
                    else{
                        cout << "A ordem desejada é: " << B << " " << A << " " << C;
                    }
            }
            else if(B>A && B>C){
                    if(A>C){
                        cout << "A ordem desejada é: " << C << " " << B << " " << A;
                    }
                    else{
                        cout << "A ordem desejada é: " << A << " " << B << " " << C;
                    }
            }
            else if(C>A && C>B){
                    if(B>A){
                        cout << "A ordem desejada é: " << A << " " << C << " " << B;
                    }
                    else{
                        cout << "A ordem desejada é: " << B << " " << C << " " << A;
                    }
            }

        break;


    }

    

    return 0;
}