#include <stdio.h>

int main(){
    //Variavel
    int v1, v2;

    //Digite o primeiro valor
    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);

    //Digite o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);

    //Calculando
    if (v1 > v2){
        printf("Crescente");
    } else if (v2 > v1){
        printf("Decrescente");
    } else {
        printf("Digite outros numeros");
    }

    return 0;
}