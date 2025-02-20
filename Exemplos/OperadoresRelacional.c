#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("\n primeiro numero e o segundo numero sao iguais? %d", n1 == n2);
    printf("\n o primeiro e maior que o segundo? %d", n1 > n2);
    printf("\n O primeiro e menor ou igual ao segundo? %d", n1 <= n2);

    return 0;
}