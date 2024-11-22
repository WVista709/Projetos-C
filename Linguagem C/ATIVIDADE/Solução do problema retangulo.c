#include <stdio.h>
#include <math.h>

int main(){
    //Variaveis
    float base, altura, area, perimetro, diagonal;

    //Digite a base do triangulo
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    //Digite a base da altura
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    //Area do triangulo
    area = (base * altura) / 2;

    //Perimetro do triangulo
    perimetro = 2 * (base + altura);

    //Diagonal do triangulo
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));
    
    //Mostrando o resultado
    printf("Base do triangulo: %.2f\n Altura do triangulo: %.2f\n Area do triangulo: %.2f\n Perimetro do triangulo: %.2f\n Diagonal do triangulo: %.4f", base, altura, area, perimetro, diagonal);
}