#include <stdio.h>
#include <math.h>

int main(){
    //Variavel
    double a, b, c, baskara_positivo, baskara_negativo;

    //Digite o valor A ao quadrado
    printf("Valor de A: ");
    scanf("%lf", &a);

    //Digite o valor B dependente
    printf("Valor de B: ");
    scanf("%lf", &b);

    //Digite o valor
    printf("Valor de C: " );
    scanf("%lf", &c);

    //Calculando a baskahra
    baskara_positivo = (-b + sqrt(pow(b, 2) - 4 * a * c))/2 * a;
    baskara_negativo = (-b - sqrt(pow(b, 2) - 4 * a * c))/2 * a;

    //Resultando
    printf("X1 = %lf e X2 = %lf", baskara_positivo, baskara_negativo);

    return 0;
}