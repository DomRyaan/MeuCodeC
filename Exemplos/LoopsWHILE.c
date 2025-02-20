#include <stdio.h>

int main(){
// While com teste no inicio
    int multiplicador = 0;
    int resultado, num;

    printf("Tabuada de qual numero: ");
    scanf("%d", &num);

    while(multiplicador <= 10){
        resultado = num * multiplicador;
        printf("%d x %d = %d\n", num, multiplicador, resultado);
        multiplicador = multiplicador + 1;
    }

 // EStrutura do do-while

    float metragem1 = 0, metragem2 = 0, resultado = 0;
    int resp;

    do {
        printf("\nCalculo de metros quadrado\n\n");
        printf("Digite a primeira metragem do terreno: ");
        scanf("%f", &metragem1);
        printf("\nDigite a segunda metragem do terreno: ");
        scanf("%f", &metragem2);

        resultado = metragem1 * metragem2;
        printf("\n\nO terro tem = %.2f m2", resultado);

        printf("\nDigite 1 para continuar ou 0 para sair\n");
        scanf("%d", &resp);
    
    } while(resp == 1); 

    return 0;
}