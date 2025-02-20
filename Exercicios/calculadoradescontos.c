#include <stdio.h>

int main(){
    // Deve calcular o preço final do produto com base no preço de venda, imposto e descontos
    // Variavel para o preço de venda
    // Constantes o valor dos imposto e descontos
    float preco_venda;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco_venda);

    const float imposto = 10.0/100.0;
    const float desconto = 5.0/100.0;

    float imposto_produto = preco_venda * imposto;
    float desconto_produto = preco_venda * desconto;

    float valor_final = (preco_venda + imposto_produto) - desconto_produto; 
    printf("O valor final do produto e: %.2f", valor_final);

    return 0;

}