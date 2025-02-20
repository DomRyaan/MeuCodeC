#include <stdio.h>

int main() {
// Declarando Matrizes
    float notas[3][2];
    //Aluno 1
    notas[0][0] = 9.5;
    printf("Digite uma nota: ");
    scanf("%f", &notas[0][1]);
    printf("Nota digitada: %.2f", notas[0][1]);

    // Aluno 2
    notas[1][0] = 4.5;
    notas[1][1] = 6.2;

    // Aluno 3
    notas[2][0] = 7;
    notas[2][1] = 8.5;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite a nota %d do aluno: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    
    int l,c, l2, c2, linha, coluna;
    long soma = 0;

    printf("Digite as dimensoes da primeira Matriz (l x c): ");
    scanf("%d %d", &l, &c);
    printf("\nDigite as dimensoes da segunda Matriz(l x c): ");
    scanf("%d %d", &l2, &c2);

    // Verificar se e possivel fazer a multiplicacao
    if( c != l2){
        printf("Multiplicacao entre as matrizes nao e possivel.\n");
        return 0;
    }

    int matriz1[l][c], matriz2[l2][c2]; 
    long resultado[l][c2];
    printf("Digite os elementos da primeira Matriz:\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matriz1[linha][coluna]);
        }
    }

    printf("Digite os elementos da segunda Matriz:\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            scanf("%d", &matriz2[linha][coluna]);
        }
    }

        // Calculo do produto das matrizes
        for(linha = 0; linha < l; linha++){
            for (coluna = 0; coluna < c2; coluna++){
                for(int k = 0; k < l2; k++){
                soma+= matriz1[linha][k] * matriz2[k][coluna];
            }
            resultado[linha][coluna] = soma;
            soma = 0;
        }

    }
    printf("O produto das matrizes: \n");
    for(linha = 0; linha < l; linha++){
        for(coluna = 0; coluna < c2; coluna++){
            printf("%d\t", resultado[linha][coluna]);
        }
        printf("\n");
    }
    
/*    
    // Calculo da soma das Diagonais
    for(linha = 0, coluna = 2; linha < 3,coluna >= 0; linha++, coluna--){
        sDiagPrinc += matriz[linha][coluna];
        sDiagSec += matriz[linha][coluna];
    }
*/
    return 0;
}
