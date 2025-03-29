#include <stdio.h>

int main()
{
    int dias_que_faltam, resultado_semanas, resultado_dias;

    printf("Insira quantos dias faltam para a prova de Programacao:\n");
    scanf("%i", &dias_que_faltam);

    resultado_semanas = dias_que_faltam/7;
    resultado_dias = dias_que_faltam%7;

    printf("Faltam %i semanas e %i dias para a prova. Estude!\n", resultado_semanas, resultado_dias);
    return 0;
}   