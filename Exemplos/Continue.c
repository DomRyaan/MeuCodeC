#include <stdio.h>

int main(){
// Pulando os numeros pares
    for(int i = 0; i <= 20; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}