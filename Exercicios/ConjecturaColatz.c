#include <stdio.h>

int main() {
    long long num;
    printf("\nDigite um numero: ");
    scanf("%lld", &num);
 
    while(num > 1) {
        if (num % 2 == 0){
            num = num / 2;
        } else{
            num = (num * 3) + 1; 
        }
    }

    printf("numero final e: %lld", num);

    return 0;
}