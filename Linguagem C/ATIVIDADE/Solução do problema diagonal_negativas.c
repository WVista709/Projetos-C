#include <stdio.h>

int main(){
    //Variaveis
    int N, qtd_negativo;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int matriz[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal Principal:\n");
    for (int i = 0; i < N; i++){
        printf("%d ", matriz[i][i]);

    }

    qtd_negativo = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (matriz[i][j] < 0){
                qtd_negativo++;
            }
        }
    }

    printf("Quantidade de negativos: %d\n", qtd_negativo);
    return 0;
}