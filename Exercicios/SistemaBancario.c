#include <stdlib.h>
#include <stdio.h>

int main(){
    float soma = 0, valor;
    int opcao;

    do{
        printf("\n Digite uma operacao:\n");
        printf("\t1. Deposito\n");
        printf("\t2. Saque\n");
        printf("\t3. Saldo\n");
        printf("\t4. Sair\n");
        
        printf("\nQual opcao?");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\n Valor do deposito: ");
                scanf("%f", &valor);
                soma += valor;
                break;
            case 2:
                printf("\n Valor do Saque: ");
                scanf("%f", &valor);
                soma -= valor;
                break;
            case 3:
                printf("\n Saldo atual e: %.2f\n", soma);
                break;
            default:
                if(opcao != 4){
                    printf("Opcao invalida!");
                }
        }
    } while (opcao != 4);

printf("Fim das operações. \n\n");

    return 0;
}