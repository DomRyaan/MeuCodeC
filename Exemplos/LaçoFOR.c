#include <stdio.h>

int main() {  
    int multiplicador, resultado, num;

    printf("Tabuada de qual numero: ");
    scanf("%d", &num);

    for(multiplicador='*'; multiplicador <= 4; multiplicador++){
        multiplicador;
        printf("%d x %d = %d\n", multiplicador, num, resultado);
    }


    int num, multi;

    for(num = 1; num <= 5; num++){
        for(multi = 1; multi <= 10; multi++){
            printf(" %d ", num*multi);
        }
        printf("\n");
    }   

    int x, y;

    for(x = 10, y = 0;x >= 0 && y <= 10; x--, y++){
        printf("%d  %d\n", x, y);
    }

    
    int n;

    unsigned long long fatorial = 1;

    printf("Digite um numero positivo: ");
    scanf("%llu", &n);

    if( n < 0){
        printf("Numero invalido, digite outro!");
    } else{
        for(int i = 1; i <= n; i++){
            fatorial *= i;
        }

        printf("O fatorial de %d e %llu\n", n, fatorial);
    }

    // DEclaramos a variavel linhas, espaço e asteriscos para controlar nossa piramide
    int linhas, espacos, asteriscos;

    // Obter o valor que desejam para a nossa piramide
    printf("Digite quantas linhas o triangulo devera ter: ");
    // guardamos na variavel linha
    scanf("%d", &linhas);

    // Criamos um loop for que irá encarregar das linhas
    for(int i = 0; i <= linhas; i++){
        // loop for que ficará com os espações dentro da linha
        for(espacos = i;espacos < linhas; espacos++){
            printf(" ");
        }

        // impressao dos asteriscos
        for(asteriscos = 1; asteriscos <= (2 * i - 1); asteriscos++){
            printf("*");
        } 
        printf("\n");
    }
    
    return 0;
}