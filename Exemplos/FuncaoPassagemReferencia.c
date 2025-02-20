// Passagem por referência
    #include <stdio.h>
    #include <string.h>

    // Passagem por referência com Ponteiros.
        // E quase igual ao passagem por valor, só que a aqui, a função não cria uma copia da variavel, ela trabalha diretamento com o endereço de memoria da variavel, por meio de ponteiros.
        // Uma das principais vantagens da Passagem de Parâmetro por Referência, é a capacidade de manipular e transmitir grandes quantidades de dados para diversas partes do nosso programa.
        // A desvantagem é a que uma funcao por referencia pode corromper os dados do chamador.
    
            int testar(int* p1, int* p2){
                *p1 = -1;
                *p2 = -2;

                printf("\n\n Valores dentro da funcao testar(): ");
                printf("\n p1 = %d e p2 = %d", *p1, *p2);

                return 0;

            }

            int main(){
                int p1 = 10;
                int p2 = 20;

                printf("\n\n Valores antes de chamar a funcao:");
                printf("\n p1 = %d e p2 = %d", p1, p2);

                testar(&p1, &p2);
                printf("\n\n Valores depois de chamar a funcao: ");
                printf("\n p1 = %d e p2 = %d", p1, p2);
            }
            
    // Passagem de vetores e matrizes
        // Em C, quase todo os vetores que são passados a uma função, são por referencia, isso porque se da o endereço do vetor.
       
        void inserir(int a[3][3]){ // Só é preciso especificar a dimensão em Matrizes, Arrays de uma dimensão, não precisa ser especificado.
            int i, j;

            for (j = 0; j < 3; j++)
            {
                for (i = 0; i < 3; i++)
                {
                    printf("Digite o valor %d: ", i += 1);
                    scanf("%d", &a[i][j]);
                }
        }
        }

        void imprimir(int b[3][3]){
            int i, j;

            for (j = 0; j < 3; j++)
            {
                for (i = 0; i < 3; i++)
                {
                    printf("%d ", b[i][j]);
                }
        }
        }

        int main(){
            int mat[3][3];

            printf("\nPreenchendo a array...\n");
            inserir(mat);
            printf("\nValores informados:\n");
            imprimir(mat);

            return 0;
        }
        

    // Passagem de estruturas por referência
      // Usa-se um ponteiro como paramentro para passar um Struct a função, igual a uma variavel comum. Isso evitar criar copias desnecessarias dos dados, podendo alterar o dado original;
      // Usa-se o "->" para declarar um ponteiro para uma struct.

        struct Pessoa
        {
            char nome[50];
            int idade;
        };

        void modificarPessoa(struct Pessoa *p){
            p->idade = 30;
        }

        int main(){
            struct Pessoa pessoa1;
            strcpy(pessoa1.nome, "Ryan");
            pessoa1.idade = 25;

            modificarPessoa(&pessoa1);

            printf("Nome: %s\n", pessoa1.nome);
            printf("Idade: %d\n", pessoa1.idade);

            return 0;
        }
        
    