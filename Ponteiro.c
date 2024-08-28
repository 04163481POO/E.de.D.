#include <stdio.h>
#include <malloc.h>
int main() {
    int *Y;
    Y = (int *) malloc(sizeof(int));

    int I = 5;
    int J = I;
    int *K;
    K = &I;
    I = I + 1;
    
    
    printf("I: %i\n", I);
    printf("J: %i\n", J);
    printf("K: %i\n", *K);
    printf("Y: %i\n", *Y);
    printf("Y: %p\n", Y);
}