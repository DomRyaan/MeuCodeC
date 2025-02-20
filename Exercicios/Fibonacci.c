#include <stdio.h>

int main(){
/*
Você está trabalhando em um projeto de análise de crescimento populacional e precisa calcular a sequência de Fibonacci para prever o número de indivíduos em uma população de coelhos ao longo do tempo. 
A sequência de Fibonacci é amplamente utilizada em modelagem matemática para representar o crescimento populacional e pode ser útil para prever a expansão de uma população de animais, como os coelhos.

Você deve elaborar um programa em C que, a partir de uma entrada n, exiba os n primeiros termos da sequência de Fibonacci.

Por exemplo:

N = 5 -> 0 1 1 2 3

N = 8 -> 0 1 1 2 3 5 8 13
*/    
    int n, a = 0, b = 1, fibonacci;
    
    printf("Digite quantos numeros de fibonacci deseja saber: ");
    scanf("%d", &n);

    if (n <= 0){
        printf("Por favor, digite um numero valido!\n");
        return 1;
    }

    printf("Sequencia de Fibonacci:\n\n");

    for(int i = 0;i < n; i++){
        if(i <= 1){
            fibonacci = i;
        }else {
        fibonacci = a + b;
        a = b;
        b =  fibonacci;
        }
        printf("%d ", fibonacci);
    }
    printf("\n");

    return 0;
}