#include <stdio.h>
#include <string.h>

struct Aluno{
    char nome[30];
    int idade;
    char sexo;
    int numeroMat;


};

int main(){

    struct Aluno aluno[5]; /* Criação de um vetor de estrutura */

    aluno[1].numeroMat = 01;
    strcpy(aluno[1].nome, "Ryan");
    aluno[1].sexo = 'M';
    aluno[1].idade = 19;

    printf("Numero de matricula do aluno: %d\n", aluno[1].numeroMat);
    printf("Sexo: %c\n", aluno[1].sexo);
    printf("Idade: %d\n", aluno[1].idade);

    strcpy(aluno[2].nome,  "Maria");

    printf("Nome da %d aluno: %s\n", aluno[1].numeroMat,aluno[1].nome);
    printf("Nome da 2 aluna: %s\n", aluno[2].numeroMat,aluno[2].nome);

    typedef int inteiro;

    inteiro x = 10;
    printf("Valor de x: %d\n", x);

    return 0;
}