#include <stdio.h>

int main(){
    //Variveis
    int idade, qtd, soma;
    double media;

    //Digite o valor inicial
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    soma    = 0;
    qtd     = 0;

    while (idade >= 0)
    {
        soma    = soma + idade;
        qtd     = qtd + 1;

        scanf("%d", &idade);
    }
    
    media = (double)soma / qtd;

    printf("Media: %.2lf", media);

    return 0 ;

}