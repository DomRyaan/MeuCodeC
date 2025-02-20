#include <stdio.h>

// Automatizar o caixa
int main(){
    //Calcular o desconto concedido com base no cliente na mesa100
        // Valor total de integrante
            // Então calcular o desconto por pessoa

    
    float valor_conta, desconto;
    int qtd_pessoa;

    // Receber o valor total da conta
    printf("Quanto deu a conta: ");
    scanf("%f", &valor_conta);

    // Receber quantidade de pessoa na mesa
    printf("Quantas pessoas há na mesa: ");
    scanf("%d", &qtd_pessoa);

    // Receber a porcetagem
    printf("Digite o desconto percentual que deseja aplicar(sem o simbolo de porcetagem): ");
    scanf("%f", &desconto);

    // Calcular o valor por pessoa
    float valor_por_pessoa = valor_conta / qtd_pessoa;

    // aplicar o desconto
    float desconto_valor = valor_por_pessoa * desconto / 100;
    float valor_final = valor_por_pessoa - desconto_valor;
    float total = valor_final * qtd_pessoa;
    // mostrar valor final
    printf("A conta deu %.2f por pessoa", valor_final);
    printf("\n O valor total e: %.2f", total);

    return 0;
};