#include <stdio.h>

int main(){
    //Variaveis
    int v1, v2, v3;

    //Digite o valor 1
    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);

    //Digite o valor 2
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);

    //Digite o valor 3
    printf("Digite o terceiro valor: ");
    scanf("%d", &v3);

    //Verificando quem é o menor
    if (v1 <= v2 && v1 <= v3) {printf("%d e o menor valor \n", v1);}
    if (v2 <= v1 && v2 <= v3) {printf("%d e o menor valor \n", v2);}
    if (v3 <= v1 && v3 <= v2) {printf("%d e o menor valor \n", v3);}

    return 0;
}