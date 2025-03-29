#include <stdio.h>  

int main(){
    float km, kmpl, l;


    printf("Digite quantos Km de distancia um carro esta da UENP e seu consumo \n");
    scanf("%f %f", &km, &kmpl);

    l = km/kmpl;

    printf("Os litros gastos serao: %f L", l);


    return 0;

}
