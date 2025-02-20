#include <stdio.h>
#include <string.h>

int proximoId = 1;

typedef struct{
    char nomeProduto[50];
    float valor;
} Venda;

typedef struct{
    int id;
    char cliente[50];
    Venda produto;    
} Pedido;

void registrarPedido(Pedido *p){
    char cliente[50], produto[50];
    extern int proximoId;

    p->id = proximoId++;

    printf("\nDigite seu nome: ");
    scanf("%s", cliente);
    strcpy(p->cliente, cliente);

    printf("Digite o nome do produto: ");
    scanf("%s", produto);
    strcpy(p->produto.nomeProduto, produto);

    printf("Digite o valor do produto: ");
    scanf("%f", &p->produto.valor);
}

void consultarPedido(Pedido *p){
        printf("\nPedido: %d", p->id);
        printf("\nCliente: %s", p->cliente);
        printf("\nProduto: %s", p->produto.nomeProduto);
        printf("\nValor: %.2f\n", p->produto.valor);
    }

int main(){
    printf("\nSejam Bem vindo(a)!\n");

    Pedido pedidos[10];
    int i = 0;

    while(1){
        int opcao;
        printf("\n1 - Registrar Pedido\n2 - Consultar Pedidos\n3 - Sair\n");
        scanf("%d", &opcao);
      
        if (opcao == 1)
        { 
            if(i < 10){
                Pedido pedidos[i];
                registrarPedido(&pedidos[i]);
                ++i;
        }else{
            printf("\nLimite de pedidos atingido!\n");
        }
        else if (opcao == 2){
            for(int j = 0; j < 10; j++){
                consultarPedido(&pedidos[j]);
            }
        }else if (opcao == 3){
            break;
        }
    }
    return 0;
}