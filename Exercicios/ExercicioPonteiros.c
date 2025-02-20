#include <stdio.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ptr = vetor;

    printf("Elementos do vetor apos adicionar 10:\n");
    for (int i = 0; i < 5; i++){
        printf("Elemento do vetor: %d\v", vetor[i]);
        printf(" Endereco da Memoria: %p\n", ptr++);
    }

    printf("\n");

    return 0;
}