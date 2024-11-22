#include <stdio.h>

int main(){
    //Variaveis
    int n;
    
    //Digite a quantidade de numeros que vai digitar
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++){
        printf("Digite o numero: ");
        scanf("%d", &vet[i]);
    }

    printf("Numeros negativos:\n");

    for (int i = 0; i < n; i++){
        if (vet[i] < 0){
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}