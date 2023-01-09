#include <stdio.h>
#include <stdlib.h>
#define TAM 10

float max_vet (int n, float * vet){
    int i;
    float maior = 0;
    for(i=0; i<n; i++){
        if(vet[i]>maior){
            maior = vet[i];
        }
    }
    return maior;

}


int main(){
    float vetor[TAM] = {1.2,3.5,2.6,2.65,4.9,9.4,9.432,9.99,1.4,1,3},maiorNum;
    //size_t n = sizeof(vetor2)/sizeof(vetor2[0]);
    maiorNum = max_vet(TAM, vetor);
    printf("O maior numero do vetor eh: %g", maiorNum);
    return 0;
}
