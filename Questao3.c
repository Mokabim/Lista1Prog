#include <stdio.h>

int main()
{

    int valor_inserido, valor_cafe = 7, troco;

    printf("Insira um valor (apenas multiplos de 5):\n");
    scanf("%i", &valor_inserido);

    if (valor_inserido % 5 != 0)
    {
        printf("O valor inserido nao eh multiplo de 5!\n");
        return 0;
    }

    if (valor_inserido < valor_cafe)
    {
        printf("Ta duro, dorme!\n");
        return 0;
    }

    troco = valor_inserido % valor_cafe;
    printf("Voce ficou sem R$ %i de troco\n");
    return 0;
}