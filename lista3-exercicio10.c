#include <stdio.h>
#include <stdlib.h>
#define TAM 10

float media(int n, float *v){
    int i;
    float soma = 0, medi, cont = 0;
    for(i=0; i< TAM; i++){
        soma = soma + v[i];
        cont = cont + 1;
    }
    printf("%g", cont);
    medi = soma/cont;

    return medi;
}

int main(){
    float vetor[TAM] = {1.2,3.5,2.6,2.65,4.9,9.4,9.432,9.99,1.4,1,3}, med;
    med = media(TAM, vetor);
    printf("A media do vetor eh de: %g", med);
    return 0;
}
