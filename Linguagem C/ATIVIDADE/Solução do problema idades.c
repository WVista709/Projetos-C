#include <stdio.h>

int main(){
    int idade_1, idade_2, carater;
    float media_idade;

    //Definindo a quantidade de caracter do nome
    carater = 50;

    char Nome_1[carater], Nome_2[carater];


    //Digite seu nome
    printf("Digite o primeiro Nome: ");
    scanf("%s", &Nome_1);

    //Digite a sua primeira idade
    printf("Digite sua primeira idade: ");
    scanf("%d", &idade_1);

    //Digite o segundo nome
    printf("Digite o segundo Nome: ");
    scanf("%s", &Nome_2);

    //Digite sua segunda idade
    printf("Digite sua segunda idade:");
    scanf("%d", &idade_2);

    //Calculando a media
    media_idade = (idade_1 + idade_2)/2;

    //Diferença de idade
    printf("Media de idade é: %.1f", media_idade);

    return 0;
}