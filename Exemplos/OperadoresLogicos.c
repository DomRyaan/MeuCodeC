#include <stdio.h>

int main(){
    int a = 5, b = 10, c = 5;

    // Operador AND(Conjunção)
    printf("\n (a==b)&&(a==c) = %d", ((a==b)&&(a==c)));

    // Operador OR(Disjunção)
    printf("\n (a==b) || (a==c) = %d", ((a==b)||(a==c)));

    // Operador NOT(Negação)
    printf("\n !(a==b)||(a==c) = %d", !(a==b)||(a==c));

    return 0;
}