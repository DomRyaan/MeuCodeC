#include <stdio.h>

float calcularMassa(float a, float b){
    const float mA = 321.43;
    const float mB = 150.72;

    printf("\n\nMol A: mol B");
    printf("\n 1,2 : 1,0 = %.2f\t", 1.2 * mA + 1 * mB);
    printf("\n 1,4 : 1,0 = %.2f\t", 1.4 * mA + 1 * mB);
    printf("\n 1,6 : 1,0 = %.2f\t", 1 * mA + 1.6 * mB);

    return (a * mA) + (b * mB);
}

int main(){
    float a = 0, b = 0, res = 0;

    printf("\nDigite a massa de A: ");
    scanf("%f", &a);
    printf("\nDigite a massa de B: ");
    scanf("%f", &b);

    res = calcularMassa(a, b);

    printf("\n\nMassa final do composto: %.2f", res);

    return 0;
}