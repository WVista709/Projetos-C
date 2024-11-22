#include <stdio.h>

int main(){
    //Variaveis
    int a, qtd, soma;

    //Digite o valor
    printf("Digite o valor: ");
    scanf("%d", &a);

    qtd = 0;

    //Digite o valor
    while (qtd < 11){
        //Calculando
        soma = a * qtd;

        //Resultado
        printf("%d x %d = %d\n", a, qtd, soma);

        qtd++;
    }

    return 0;
}