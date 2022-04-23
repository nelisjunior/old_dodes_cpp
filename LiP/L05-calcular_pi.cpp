/* 
Lab05 - Calcular valor de Pi [Q2]
Comandos de Repetição 2
Calcule o valor de Pi com a série infinita. Pi= 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + 4/N ...
O seu programa deve ler a quantidade de termos N da série infinita.
Leve em consideração os seguintes pontos:

    Utilize 7 casas decimais para mostrar a sua solução. Para isto,
    o seu programa deve ter #include <iomanip> e o comando cout << setprecision(8);
    na primeira linha da função main
    Utilize variáveis do tipo double para as variáveis que representem números reais

*/
    #include <iostream>
    #include <iomanip>

    using namespace std;

    int main(){
        cout << setprecision(8);

        int n, cont=1, i=1;
        double Pi;

        cin >> n;

        if(n>=1){
            do{
            Pi+=(4.0/i);
            i+=2;
            cont++;
                if(cont<=n){
                    Pi-=(4.0/i);
                    i+=2;
                    cont++;
                }
                else{
                    break;
                }
            }while(cont<=n);

        }
        cout << Pi << endl;

        return 0;
    }
