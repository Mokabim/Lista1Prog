#include <stdio.h>

int main(){

    float tam_arq, vel_int, tempo_download;

    printf("Qual o tamanho do arquivo?\n");
    scanf("%f", &tam_arq);

    printf("Qual a velocidade da sua internet (Mbps)?\n");
    scanf("%f", &vel_int);

    tempo_download = (tam_arq/vel_int)*8;

    printf("O tempo estimado de download sera de %f segundos", tempo_download);
    return 0;


}