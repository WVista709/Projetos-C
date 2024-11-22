#include <stdio.h>

int main(){
    //Variaveis
    int n;
    double media_altura = 0;

    //Digite quantidade de pessoas
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);

    int vetor[n];
    char nome[n][50];
    double altura[n];
    int idade[n];

    //Inforamções da pessoa
    for (int i = 0; i < n; i++){
        printf("Dados da %da pessoa\n", i + 1);

        //Nome
        printf("Digite o nome: ");
        scanf("%s", nome[i]);

        //Idade
        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        //Altura
        printf("Digite a altura: ");
        scanf("%.2lf", &altura[i]);
    }

    //Media de altura
    for (int i = 0; i < n; i++){
        media_altura = media_altura + vetor[i];
    }

    media_altura = media_altura/n;

    printf("\nMedia da altura: %.2lf", media_altura);
    return 0;
}