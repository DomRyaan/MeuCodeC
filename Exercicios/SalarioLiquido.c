#include <stdio.h>

// Determinar o salario liquido de cada colaborador
// Considerar as deduções do INSS e Imposto de Renda
int main(){
    float salario, aliquota_inss, aliquota_ir;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    // Aliquota do INSS 
    if (salario <= 1320.00){
        aliquota_inss = salario * 7.5 / 100;
    } else if ( 1320.00 <= salario && salario <= 2571.29) {
        aliquota_inss = salario * 9 / 100;
    } else if (2571.29 <= salario && salario <= 3856.94){
        aliquota_inss = salario * 12 / 100;
    } else{
        aliquota_inss = salario * 14 / 100;
    }

    // Aliquota do ir
    if (salario <= 1903.98) {
        aliquota_ir = 0;
    } else if (1903.98 <= salario && salario <= 2826.65){
        aliquota_ir = salario * 7.5 / 100;
    }else if (2826.65 <= salario && salario <= 3751.05 ){
        aliquota_ir = salario * 15 / 100;
    } else if (3751.05 <= salario && salario <= 4664.68){
        aliquota_ir = salario * 22.5 / 100;
    } else{
        aliquota_ir = salario * 27.5 / 100;
    }

    float salario_liquido = salario - (aliquota_inss + aliquota_ir);
    printf("Seu salario liquido é: %.2f", salario_liquido);

    return 0;
}