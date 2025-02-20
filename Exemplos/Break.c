#include <stdio.h>

int main(){
    int numero_secreto = 7;
    int tentativa;

    printf("Advinhe o numero!\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &tentativa);

        if (tentativa == numero_secreto) {
            printf("Parabens, voce acertou!\n");
            break;
        }else {
            printf("Tente novamente\n");
        }
    }

    return 0;
}