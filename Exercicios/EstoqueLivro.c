#include <stdio.h>
#include <string.h>

#define NUM_LIVROS 3    

typedef struct{
    char titulo[100];
    char autor[100];
    int ano;
    int estoque;
} Livro;

int main(){
    Livro livros[NUM_LIVROS] = {
        {"O Senhor dos Aneis", "J.R.R. Tolkien", 1954, 10},
        {"O Hobbit", "J.R.R. Tolkien", 1937, 5},
        {"Silmarillion", "J.R.R. Tolkien", 1977, 3}
    };

    /* 
    printf("Titulo: %s\nAutor: %s\nAno de publicao: %d\nEstoque Disponivel: %d", livro.titulo, livro.autor, livro.ano, livro.estoque); 
    */

   //Realiza uma busca por autor
   char autorProcurado[50];
   fflush(stdin);
   printf("Digite o nome do autor que deseja procurar: ");
   fgets(autorProcurado, 50, stdin);
   autorProcurado[strcspn(autorProcurado, "\n")] = 0;
   printf("Livros do autor %s:\n", autorProcurado);

    for (int i = 0; i < NUM_LIVROS; i++){
        if (strcmp(livros[i].autor, autorProcurado) == 0){
            printf("Titulo: %s\nAno de publicacao: %d\nEstoque Disponivel: %d\n\n", livros[i].titulo, livros[i].ano, livros[i].estoque);
        }
    }

    // Verifica a disponibilidade de um livro
    char livroProcurado[50]; // Variavel para armazenar o nome do livro que o usuario deseja procurar
    fflush(stdin); // Limpa o buufer do teclado
    printf("Digite o nome do livro que deseja procurar: ");
    fgets(livroProcurado, 50, stdin); // Recebe o nome do livro

    livroProcurado[strcspn(livroProcurado, "\n")] = 0; // Remove o \n do final da string
    for (int i = 0; i < NUM_LIVROS; i++){ // Percorre o vetor de livros
        if (strcmp(livros[i].titulo, livroProcurado) == 0){ // Verifica se o livro procurado esta no estoque
                printf("O livro %s esta disponivel no estoque\n", livroProcurado); // Se estiver disponivel, imprime a mensagem
                break;
            }
        }

    return 0;
}