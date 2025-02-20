#include <stdio.h>

int main(){
    int numero;

    printf("Insira um numero impar: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        goto erro;
    }

    printf("Numero impar: %d", numero);

    return 0;

    erro:
    printf("Erro: Numero invalido");
    return 0;
}