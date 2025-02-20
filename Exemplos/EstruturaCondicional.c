#include <stdio.h>

int main(){
// Estrutura Condicional IF-ELSE
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Voce ja e de maior!");
    }
    else {
        printf("Voce e de menor!");
    }

// Estrutura encadeada
    int num = 10;

    if(num < 100) {
        printf("Menor que 100");
    }
    else if (num < 1000)
    {
        printf("E menor que 1000");
    } 
    else if(num < 10000) {
        printf("Menor que 10000");
    }
    else {
        printf("Maior que 10000");
    }
    

    return 0;
}