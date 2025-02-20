#include <stdio.h>

int main(){
    // Pós
    int x, y;
    x = 10;
    y = x++;

    printf("Pos-Incremento:\n");
    printf("y = x++: valor de y => %d\n", y);
    printf("y = x++: valor de x => %d\n", x);
    
    x = 10;
    y = x--;

    printf("Pos-Decremento:\n");
    printf("y = x--: valor de y => %d\n", y);
    printf("y = x--: valor de x => %d\n", x);

    // Pré
    x = 10;
    y = ++x;

    printf("Pre-Incrementacao:\n");
    printf("y = ++x: valor de y => %d\n", y);
    printf("y = ++x: valor de x => %d\n", x);

    x = 10;
    y = --x;

    printf("Pre-Decrementacao:\n");
    printf("y = --x: valor de y => %d\n", y);
    printf("y = --x: valor de x => %d\n", x);

    return 0;
}