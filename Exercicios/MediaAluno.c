#include <stdio.h>
#include <string.h>

int main(){
/*
    float nota1, nota2, nota3, nota4, media;
    char aluno[50];
    char opcao;

    do {
        printf("\nDigite o nome do aluno: \n");
        scanf("%s", &aluno);

        printf("Digite a primeira nota: \n\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: \n\n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: \n\n");
        scanf("%f", &nota3);
        printf("Digite a quarta nota: \n\n");
        scanf("%f", &nota4);

        media = (nota1 + nota2 + nota3 + nota4) / 4;

        printf("O aluno: %s tirou %.2f na media", aluno, media);

        printf("\nFalta mais algum aluno?. Digite 's' para continuar e 'n' para sair");
        scanf(" %c", &opcao);
    } while(opcao == 's' || opcao == 'S');
*/
    int avalia, cont = 0, soma = 0;
    char letra;
    float media;

    do{
        printf("Digite uma nota para avaliacao: \n");
        scanf("%d", &avalia);
        fflush(stdin);
        cont++;
        soma += avalia;

        printf("Digite 's' para continuar ou 'n' para sair: \n");
        scanf("%c", &letra);
        letra = getchar();

    }while( letra == 's' || letra == 'S');

    printf("\n \nQuantidade de avaliacao = %d e soma das notas = %d. \n", cont, soma);
    media = soma / cont;

    printf("\nA media final e: %.2f", media);

    system("PAUSE");

    return 0;
}