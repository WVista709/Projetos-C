#include <stdio.h>

int main(){
    //Variaveis
    double n1, n2, media_final;

    //Digite sua primeira nota
    printf("Digite sua primeira nota: ");
    scanf("%lf", &n1);

    //Digite sua segunda nota
    printf("Digite sua segunda nota: ");
    scanf("%lf", &n2);

    //Calculando a meida
    media_final = (n1 + n2)/2;
    printf("Primeira nota: %lf e Segunda nota: %lf", n1, n2);
    printf("Media é: %.2lf", media_final);

    return 0;
}