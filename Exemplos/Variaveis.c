#include <stdbool.h>
#include <stdio.h>

#define pi 3.14

int main (){
// Tipo de dados primitivos de uma variaveis   
    int idade, num2;

    idade = 19;
    num2 = 666;

    float salario = 7500;

    double qtd_atomos;

    bool comfirmacao = false;

    char genero = 'M';

// Variaveis em Endereço de memoria
    char caractere;
    float valor1, valor2;

    printf("\n Digite uma letra qualquer: ");
    scanf("%c", &caractere);

    printf("\nDigite um valor: ");
    scanf("%f", &valor1);

    printf("\n Digite um outro valor: ");
    scanf("%f", &valor2);

    printf("Varivavel 1 = %c\n", caractere);
    printf("Variavel 2 = %.1f\n", valor1);
    printf("Variavel 3 = %.1f\n", valor2);


// Constantes
    const float g = 9.8;
    
    printf("\n pi = %f", pi);
    printf("\n g = %f", g);

    return 0;
};