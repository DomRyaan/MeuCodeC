// Recursividade
 // Função recursivas é quando a função tem a capacidade de chamar a si mesma.
 // Para não haver uma chamada excessiva, toda função recursiva tem um caso base, que a função ira ser chamado até que a condição do caso-base seja atendida.
#include <stdio.h>
    // Função recrusiva que irá somar todos os antecessores.
        int somar(int valor){
            if (valor != 0)// Caso Base - condição de parada -.
            { 
                return valor + somar(valor -1);
            } else {
                return valor;
            }
        }

        int main(){
            int n, resultado;
            
            printf("\nDIgite um numero inteiro positivo: ");
            scanf("%d", &n);
            
            resultado = somar(n);
            printf("\nResultado da soma = %d", resultado);

            return 0;
        }