#include <stdio.h>

int main(){
    //Variaveis
    int N, soma, media;

    //Digite a quantidade de numeros
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    //Calculando o vetor
    int vetor[N];

    //Digitando o valores do vetor
    for (int i = 0; i < N; i++){
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);
    }

    //Mostrando o que tem no vetor
    printf("Valores = ");

    for (int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }

    //Somando
    soma = 0;
    for (int i = 0; i < N; i++){
        soma = soma + vetor[i];
    }

    printf("\n Soma = %d", soma);

    //Media
    media = soma / N;

    printf("\n Media = %d", media);

    return 0;
}