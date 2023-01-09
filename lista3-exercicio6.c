#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int maiores(int n, int vet[], int x){
    int i, cont=0, cont2 = 0;
    for(i=0; i<n;i++){
        if(x>=vet[i]){
            vet[i] = 0;
        }
    }
    return *vet;
}

int main(){
    int i, x, a = 0, cont = 0, contador = 0;
    int vetor[TAM];
    printf("Tamanho do vetor igual a %d, porfavor digite %d numeros\n", TAM, TAM);
    for(i=0;i<TAM;i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i]>x){
            contador = contador + 1;
        }
    }
    printf("Digite o X: ");
    scanf("%d", &x);
    *vetor = maiores(TAM, vetor, x);
    printf("Os valores maiores que X dos numeros que voce escreveu são: ");
    for(i = 0; i<TAM;i++){
        if(vetor[i] == 0){
            continue;
        }else{
            printf("%d ", vetor[i]);
        }
    }
    return 0;
}
