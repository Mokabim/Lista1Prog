#include <stdio.h>

int main()
{

    float preco_original, desconto, preco_final;

    printf("Insira o preco inicial do produto e o desconto\n");
    scanf("%f %f", &preco_original, &desconto);

    preco_final = preco_original * (1 - desconto / 100);

    printf("O preco final eh R$ %f", preco_final);
    return 0;
}