#include <stdio.h>

int main(){
    // Variáveis
    int x, y;

    // Digite o primeiro número
    printf("Digite seu primeiro número: ");
    scanf("%d", &x);

    // Digite o segundo número
    printf("Digite seu segundo número: ");
    scanf("%d", &y);

    // Descobrindo quem é o menor
    if (x > y){
        // Descobrindo o intervalo
        for (int i = y + 1; i < x; i++){
            // Descobrindo se é par ou ímpar
            if (i % 2 == 0) {
                // Mostrando o número par
                printf("%d - Par\n", i);
            } else {
                // Mostrando o número ímpar
                printf("%d - Ímpar\n", i);
            }
        }
    } else if (y > x){
        // Descobrindo o intervalo
        for (int i = x + 1; i < y; i++){
            // Descobrindo se é par ou ímpar
            if (i % 2 == 0) {
                // Mostrando o número par
                printf("%d - Par\n", i);
            } else {
                // Mostrando o número ímpar
                printf("%d - Ímpar\n", i);
            }
        }
    }

    return 0;
}