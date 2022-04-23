/*
Faça um programa que recebe números inteiros positivos do usuário enquanto o usuário digita valores diferentes de zero.
Ao final do seu programa, imprima a mensagem Número primo digitado se o usuário digitou algum número primo.
Caso contrário, imprima a mensagem Número primo não digitado.
*/
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x=1, contprimo=0, ehprimo, verprimo=0;


    while(x!=0){
        cin >> x;
        ehprimo=1+x;

        for(int i=1;i<=x;i++){
            if(x%i==0){
                verprimo+=i;
            }
        }
        if(verprimo==ehprimo){
            contprimo++;
        }
        verprimo=0;
    }

    if(contprimo>=1){
        cout << "Número primo digitado!" << endl;
    }
    else{
        cout << "Nenhum número primo foi digitado!" << endl;
    }


return 0;
}
