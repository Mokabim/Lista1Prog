#include <stdio.h>

int main(){
    int x, y;
    
    printf("Digite o valor de X e de Y: \n");
    scanf("%i %i", &x, &y);
    
    printf("O X inicial eh %i e o Y inicial eh %i\n", x, y);
    int temporario = x;
    x = y;
    y = temporario;
    printf("O X final eh %i e o Y final eh %i\n", x, y);
    
    return 0;}
