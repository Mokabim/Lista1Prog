#include <stdio.h>

int main()
{

    float n1, n2, n3, n4, media_final, p1, p2, p3, p4;

    printf("Diga quais foram as 4 notas:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("Diga quais sao os 4 pesos:\n");
    scanf("%f %f %f %f", &p1, &p2, &p3, &p4);

    media_final = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4) / (p1 + p2 + p3 + p4);

    printf("A media final foi %f\n", media_final);

    return 0;
}