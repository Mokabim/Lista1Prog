#include <stdio.h>

int main()
{

    float preco_inicial, preco_venda, lucro, lucro_pct;

    printf("Por quanto comprou o objeto?\n");
    scanf("%f", &preco_inicial);

    printf("Por quanto vai vender?\n");
    scanf("%f", &preco_venda);

    lucro = preco_venda - preco_inicial;
    lucro_pct = lucro/preco_inicial * 100;

    printf("Seu lucro foi de R$ %f (%f %%) \n", lucro, lucro_pct);
    return 0;
}