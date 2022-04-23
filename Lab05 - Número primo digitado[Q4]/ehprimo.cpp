/*
Fa�a um programa que recebe n�meros inteiros positivos do usu�rio enquanto o usu�rio digita valores diferentes de zero.
Ao final do seu programa, imprima a mensagem N�mero primo digitado se o usu�rio digitou algum n�mero primo.
Caso contr�rio, imprima a mensagem N�mero primo n�o digitado.
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
        cout << "N�mero primo digitado!" << endl;
    }
    else{
        cout << "Nenhum n�mero primo foi digitado!" << endl;
    }


return 0;
}
