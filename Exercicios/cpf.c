#include <stdio.h>
#include <string.h>

// Receber e formatar o CPF para uma melhor leitura 
int main(){
    char input_cpf[15];
    char cpf[12] = "";
    int n = 0, i = 0;

    printf("\nDigite seu CPF no formato: 'NNN.NNN.NNN-NN': ");
    fgets(input_cpf, 15, stdin);


    for(i = 0; i < strlen(input_cpf); i++){
        if(input_cpf[i] == '.' || input_cpf[i] == '-'){
            continue;
        }
        else {
            cpf[n] = input_cpf[i];
            n++;
    }
}
    cpf[n] = '\0';
    printf("\nCPF: %s", cpf);

    return 0;
}