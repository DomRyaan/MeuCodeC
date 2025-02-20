#include <stdio.h>

int main(){
    // Switch case
    char opcao;
    float valor, total;

    printf("\n Digite o valor da compra: \n");
    scanf("%f", &valor);

    printf("\nDigite a letra do desconto a ser aplicado: \n");
    printf("\ta - 10%% de desconto\n");
    printf("\tb - 15%% de desconto\n");
    printf("Digite sua opcao: ");
    scanf("%s", &opcao);

    switch(opcao) {
        case 'a':
            total = valor - (valor * 10 / 100);
            printf("\nO valor total a ser pague e: %.2f", total);
            break;
        case 'b':
            total = valor - (valor * 10 / 100);
            printf("\nO valor total a ser paguene: %.2f", total);
            break;
        default:
            printf("Nenhum desconto aplicado!");
    };

    return 0;
}