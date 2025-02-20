#include <stdio.h>

int search_binary(int array[], int size, int item){
    int right = 0;
    int left = size - 1;

    while (right <= left)
    {
        int middle = (right + left) / 2;
        int pivo = array[middle];
        if (pivo == item){
            return middle;
        } else if (pivo > item){
            left = middle - 1;
        }else{
            right = middle + 1;
        }
    }

    return 1;
}

int main(){
    int array[100];
    int item;

    for(int i = 0; i < 100; i++){
               array[i] = i;
        }

    printf("Digite o numero que voce deseja ver se esta na lista: ");
    scanf("%d", &item);

    int busca = search_binary(array, 100, item);

    if (busca == 1){
        printf("\nNao esta na lista\n");
    }else{
    printf("\nEsta na posicao: %d\n", busca);
    }
    return 0;
}