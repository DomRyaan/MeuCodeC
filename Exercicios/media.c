// Importamos a biblioteca que tem a funcao de entrada e saida de dados
#include <stdio.h>

// declaramos uma função principal main
int main(){ 

// declaramos uma variavel que ira receber um valor do usuario
    float valor1;

// declaramos uma segunda variavel que pegue outro valor do usuario
    float valor2;

// pegaremos o primeiro valor
    printf("Digite um numero: ");
    scanf("%f", &valor1);

// pegaremos o segundo valor
    printf("Digite um outro numero: ");
    scanf("%f", &valor2);

// efetuamos a divisao da soma das duas variaveis e guardamos o resultado
    float media = (valor1 + valor2) / 2;

// exibimos o resultado
     printf("A media e: %f", media);

     return 0;   
    }