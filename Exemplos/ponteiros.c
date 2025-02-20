// Ponteiros: São um tipo de variavel que armazenam um endereço de memoria permitindo a manipulação de outras variaveis.
// O Acesso a memoria é usado usando dois tipos de operadores: Os "*", para declarar o ponteiro, e o '&, para acessar o endereço de memoria.
// Sintaxe: <tipo> *<nome do ponteiro> = &<nome da variavel>;
#include <stdio.h>

struct Aluno{
    char nome[200];
    int mat;
    float nota;
};

int main(){
    int *idade;
    // Um ponteiro do tipo inteiro é criado para apontar a uma varivel do mesmo tipo.
    // UM ponteiro só tem significado se estiver associado a um endereço de memoria.
    int ano = 19;
    idade = &ano;

    printf("O valor de ano e: %d\n", ano);
    printf("Conteudo do ponteiro:  %p\n", idade);
    printf("Conteudo da variavel pelo ponteiro: %d\n", *idade);
    printf("Endereço do ponteiro: %p\n", &idade);


// Operação com ponteiros
   // Ponteiros podem ter um valor chamado NULL, que serve para indicar que o ponteiro não aponta para nenhum endereço de memoria, e consequentemente esta vazio.
    int *ponteiro = NULL;
    if (ponteiro == NULL){
        printf("O ponteiro esta vazio\n");
    }

    // Ponteiros só podem fazer duas operações: Soma e Subtração.
    // Ponteiros podem ser somados ou subtraidos de um inteiro, mas não podem ser somados ou subtraidos entre si.
    p++; // Soma 1 ao ponteiro
    p--; // Subtrai 1 do ponteiro
    p = p + 2; // Soma 2 ao ponteiro
    (*p)++; // Soma 1 ao valor apontado pelo ponteiro
    (*p)--; // Subtrai 1 do valor apontado pelo ponteiro
    *p = (*p) * 10; // Multiplica o valor apontado pelo ponteiro por 10


    // A aritmetica de ponteiros permite que naveguemos por elementos de um vetor ou de uma matriz.
    int numeros[5] = {1, 2, 3, 4, 5};
    int *ponteiro = &numeros[0];

    // Acessando o primeiro elemento do vetor
    int primeiro_elemento = *ponteiro;
    printf("O primeiro elemento do vetor e: %d\n", primeiro_elemento);

    // Acessando o segundo elemento do vetor
    int segundo_elemento = *(ponteiro + 1);
    printf("O segundo elemento do vetor e: %d\n", segundo_elemento);

    // avançando 2 elementos
    ponteiro = ponteiro + 2;
    printf("O terceiro elemento do vetor e: %d\n", *ponteiro);

    // Voltando um elemento do vetor
    ponteiro--;
    printf("%p", ponteiro);

    // Compração de ponteiros
    // Ponteiros podem ser comparados entre si, usando operadores relacional como: "==' e '!='.

    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = &a;

    if (ptr1 == ptr2){
        printf("Os ponteiros apotando para o mesmos endereço de memoria\n");
    } else{
        printf("Os ponteiros apontam para endereço diferentes\n");
    }

    // Tambem é possivel comparar ponteiros usando os: <, >, <=, >=.
    // A comparação é feita com base nos endereços de memoria que os ponteiros apontam, para ver qual e o maior ou menos
    // A comparação só e valida se os ponteiros apontarem para o mesmo bloco de memoria, como os elementos de um vetor.
    int numeros[5] = {1, 2, 5, 7, 4};
    int *ptr1 = &numeros[0];
    int *ptr2 = &numeros[4];

    if (ptr1 < ptr2){
        printf("Ptr1 aponta para um endereco menor que ptr2\n");
    }

// Ponteiros para um estrutura de dados. Podem ser usado tanto em vetores, quanto matrizes e structs.

    // Em Structs, os ponteiros são declarados de forma similiar a variavel norma, mas deve usar o "->" para acessar os membros da estrutura.
        struct Aluno joao;
        struct Aluno *ptr; // Declaração do ponteiro para struct

        joao.mat = 123;
        joao.nota = 8.5;

        ptr = &joao;

        printf("%d\n", ptr->mat); // Acessando o membro mat da struct
        printf("%.1f", ptr->nota); // Acessando o membro nota da struct

    // Ponteiros para vetores e matrizes
    // Ao declarar um vetor, o computador armazena os endereços de memomiria de forma sequencial, assim o primeiro elemento serve como um ponteiro para dar a localização dos elementos seguintes.
    // O mesmo vale para matrizes, onde o primeiro elemento de cada linha serve como um ponteiro para os elementos da linha seguinte.
    char *ptr;
    int i;

    char vet[5] = {'a', 'b', 'c', 'd', 'e'};
    ptr = vet; // O ponteiro aponta para o primeiro elemento do vetor

    for (i = 0; i < 5; i++){
        // Conteudo do vetor acessado pela variavel
    printf("\nVet[%d] = %c", i, vet[i]);

    // Conteudo do vetor acessado pelo ponteiro
    printf("\n ptr = %c", *ptr);
    ptr++;
    }

    //Usando ponteiros em Matrizes
    char *ptr;
    int i,j;

    char mat[2][2] = {'a', 'b', 'c', 'd'};
    ptr = mat; // O ponteiro aponta para o primeiro elemento da Matriz

    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
          // Acessando o conteudo das matrizes, pela suas linhas e colunas
            printf("\nMat[%d][%d] = %c", i, j, mat[i][j]);   
            printf("\n ponteiro = %c", *ptr); // Conteudo do vetor acessado pelo ponteiro
            ptr++;
        }
    }

        return 0;
}