#include <stdio.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};

    printf("\nEste e o primeiro elemento do Vetor: %d\n", vetor[0]);
    printf("Este e o segundo elemento do Vetor: %d\n", vetor[1]);
    printf("E melhor chamar de Array mesmo, este e o terceiro: %d\n", vetor[2]);

    float corpo[2] = {77.2, 1.69};

    for(int i = 0; i <= (2 - 1); i++){
        printf("%.2f \n", corpo[i]);
    }

    char nome[8];
    printf("\nDigite seu nome: ");
    fflush(stdin);
    fgets(nome, 8, stdin);
    printf("%s", nome);

    return 0;
}