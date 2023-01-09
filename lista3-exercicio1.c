#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_circulo(float r, float *circunferencia, float *area){
    float pi = 3.14159265;
    *area = pi * (r*r);
    *circunferencia = 2*pi*r;

}

int main(){
    float raio, circu, a;
    float *circunferencia, *area;
    circunferencia = &circu;
    area = &a;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    calc_circulo(raio,circunferencia,area);
    printf("A area do circulo eh: %g\n", a);
     printf("A circunferencia do circulo eh: %g\n", circu);

    return 0;
}
