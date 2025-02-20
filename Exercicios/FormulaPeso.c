#include <stdio.h>

int calculaPeso(){
    float b, c, a;
    
    printf("\nDigite o valor da base: ");
    scanf("%f", &b);

    printf("Digite o valor do comprimento: ");
    scanf("%f", &c);

    printf("Digite o valor da altura: ");
    scanf("%f", &a);

    return (int) b * a * c * 25; // O int é para ter certeza que retorn um numero inteiro, se não for um numero inteiro, então será convertido a um numero inteiro

}

int main(){

    int pes = calculaPeso();
    printf("\nPeso: %d\n", pes);
    
    if(pes <= 500){
        printf("Use o Guindaste: G1");
    } else if (pes > 1500){
        printf("Use o Guindaste: G3");
    }else{
        printf("Use o Guindaste: G2");
    }

    return 0;
}