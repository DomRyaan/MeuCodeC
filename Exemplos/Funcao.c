#include <stdio.h>
#include <stdlib.h>

// Aqui veremos tudo sobre FUnções em C
    /*
        Sintaxe de uma Função:
         <tipo de retorno> <nome da função> (<parametro>){
         
         <Comando da função>

        <retorno>    

         }
    */
   // Tipo de retorno: E igual ao declarar uma variavel, antes de declarar uma função. coloque o tipo de dado que a função irá retornar, como: Int, Float, Char...
   // Para uma função que não ira ter um retorno, utilaza o <void>

int soma(int a, int b){
    int x = a + b;

    return x;
}

int* gerarRadomica(){
    static int vet[10];

    int a;

    for(a = 0; a < 10; a++){
        vet[a] = rand() % 100; // O "% 100" serve para limitar o rand de 0 a 99
        printf("vet[%d] = %d\n", a, vet[a]);
    }

    return vet;
}

int main(){
    int *p;
    int i;

    p = gerarRadomica();
    
    for(i = 0; i < 10; i++){
        printf("\np[%d] = %d", i, *(p + i));

    }

    return 0;
}