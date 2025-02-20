#include <stdio.h>

float t1, t2;
int x = 0;

// Passagem de Parâmetros por valor.
  // Escopo de variáveis.
  // O local em que a variavel é declarada, define seu alcance e visibilidade.

  // Embora a Variavel tenha os mesmos Nomes, ambas, por estarem sendo declarado em função diferentes, tem o endereço de memoria diferentes.

float calcularMedia(float t1,float t2){
  
  return (t1 + t2) / 2;

}

int testa(int n1, int n2){
  n1 = 1;
  n2 = 2;

  printf("\n\nValores dentro da funcao testa(): ");
  printf("n1 = %d e n2 = %d", n1, n2);

  return 0;
}


int main(){

    printf("\nDigite a primeira temperatura: ");
    scanf("%f", &t1);
    printf("\nDigite a segunda temperatura: ");
    scanf("%f", &t2);

    float tempMedia = calcularMedia(t1, t2);

    printf("\nA temperatura media e: %.2f", tempMedia);


    int x = -1;
    int b;
    {
      extern int x; // Caso queira usar uma variavel global dentro de uma função, essa é a sintaxe.
      b = x;
    }

    printf("\nO valor de x = %d", x);
    printf("\nO valor de b(x global) = %d", b);

    int n1 = 10;
    int n2 = 20;

    printf("\n\nValores antes da chamar a funcao: ");
    printf("n1 = %d e n2 = %d", n1, n2);

    testa(n1, n2);
    printf("\n\nValores depois de chamar a funcao: ");
    printf("n1 = %d e  n2 = %d", n1, n2);

    return 0;
}
