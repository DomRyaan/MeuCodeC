#include <stdio.h>
#include <string.h>
// Programa para calcular o preco total de uma compra, levando em consideração os preços e a quantidade levada.

void calcularPrecoTotal(float preco[], int quantidade[], int numItens, float *precoTotal){
    *precoTotal = 0.0;

    for (int i = 0; i < numItens; i++)
    {
        *precoTotal += preco[i] * quantidade[i];
    }
    
}

int main(){
    int numItens;
    printf("Digite o numero de itens comprados: ");
    scanf("%d", &numItens);
    float preco[numItens];
    int quantidade[numItens];
    float precoTotal;

    for(int i = 0; i < numItens; i++){
        printf("\nDigite o preco unitario do item %d: ", i + 1);
        scanf("%f", &preco[i]);
        printf("\nDigite a quantidade do item %d: ", i + 1);
        scanf("%d", &quantidade[i]);
    }

    calcularPrecoTotal(preco, quantidade, numItens, &precoTotal);

    printf("\nTotal Price: %.2f\n\n", precoTotal);
    return 0;
}