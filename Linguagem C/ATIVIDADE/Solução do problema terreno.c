#include <stdio.h>

int main(){
    //Variaveis
    float larg, comp, area, valor, valor_terreno;

    //Digitando a largura
    printf("Digite a largura:\n");
    scanf("%f", &larg);

    //Digitando o comprimento
    printf("Digite o comprimento:\n");
    scanf("%f", &comp);

    //Digite o preço do terreno
    printf("Digite o preço do terreno:\n");
    scanf("%f", &valor);

    //Area do terreno
    area = larg * comp;

    //Preço
    valor_terreno = valor * area;

    //Mostrando a area do terreno e o preço
    printf("Area do terreno: %.2f\n Valor do terreno: %.2f\n", area, valor_terreno);
    
    return 0;
}