#include <stdio.h>

// Sistema que administra as disciplinas e controle dos alunos matriculados
int main(){
     // Controlar a entrada de dado, caso o total de aluno atinja o limite.

    //como fazer este controle de interrupção de uma forma simples e eficaz?

    //O programa deve permitir que o administrador insira o número de disciplinas e o número de alunos matriculados em cada uma delas.
     // Em seguida, o programa precisa verificar se o número de alunos é válido e se o limite total de alunos é atingido. 
    //Se o limite for atingido, o programa interrompe a contagem de disciplinas usando break.  
    //O uso de continue permite pular para a próxima iteração do loop se um número de alunos inválido for inserido.
    // O programa então exibe o total de disciplinas contadas e o total de alunos matriculados.

    int total_disciplinas, limite_alunos = 100, total_alunos = 0;

    printf("\nSistema de contagem de alunos matriculados!\n");

    printf("Insira o numero de disciplinas disponiveis: ");
    scanf("%d", &total_disciplinas);

    for(int i = 1; i <= total_disciplinas; i++){
        int alunos_matriculados;

        printf("Insira o numero de alunos matriculado na disciplina %d: ", i);
        scanf("%d", &alunos_matriculados);

        if(alunos_matriculados < 0){
            printf("Numero de aluno invalido. Tente novamente!\n");
            i--;
            continue;
        }

        total_alunos += alunos_matriculados;

        if (total_alunos >= limite_alunos){
            printf("Limite de aluno atingindo. Encerando");
            break;
        }
    }

    printf("Total de disciplinas: %d\n", total_disciplinas);
    printf("Totaal de alunos: %d\n", total_alunos);
       return 0;
}