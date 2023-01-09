#include <stdio.h>
#include <stdlib.h>

int total_de_notas(int valor,int *ced100,int *ced50,int *ced20,int *ced10,int *ced5,int *ced2,int *ced1){
    int contador;
    *ced100 = valor / 100;
    contador = contador+*ced100;
    if(valor % 100 != 0){
        *ced50 = (valor % 100) / 50;
        contador = contador + *ced50;
        if((valor % 100) % 50 != 0){
            *ced20 = ((valor % 100) % 50) / 20;
            contador = contador + *ced20;
            if(((valor % 100) % 50) % 20 != 0){
                *ced10 = (((valor % 100) % 50) % 20) / 10;
                contador = contador + *ced10;
                if((((valor % 100) % 50) % 20) % 10 != 0){
                    *ced5 = ((((valor % 100) % 50) % 20) % 10) / 5;
                    contador = contador + *ced5;
                    if(((((valor % 100) % 50) % 20) % 10) % 5 != 0){
                        *ced2 = (((((valor % 100) % 50) % 20) % 10) % 5) /2;
                        contador = contador + *ced2;
                        if((((((valor % 100) % 50) % 20) % 10) % 5) % 2 != 0){
                            *ced1 = ((((((valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;
                            contador = contador + *ced1;
                        }
                    }
                }
            }
        }
    }
    return contador;
}

int main(){
    int nota, total, ced100 = 0, ced50 = 0, ced20 = 0, ced10 = 0, ced5 = 0, ced2 = 0, ced1 = 0;
    int *cedu100 = &ced100, *cedu50 = &ced50, *cedu20 = &ced20, *cedu10 = &ced10, *cedu5 = &ced5, *cedu2 = &ced2, *cedu1 = &ced1;
    printf("Digite quanto dinheiro que voce quer receber e daremos o menor numero de notas possiveis: ");
    scanf("%d", &nota);
    total = total_de_notas(nota, &ced100, &ced50, &ced20, &ced10, &ced5, &ced2, &ced1);
    printf("Notas de 100: %d\n", ced100);
    printf("Notas de 50: %d\n", ced50);
    printf("Notas de 20: %d\n", ced20);
    printf("Notas de 10: %d\n", ced10);
    printf("Notas de 5: %d\n", ced5);
    printf("Notas de 2: %d\n", ced2);
    printf("Notas de 1: %d\n", ced1);
    printf("total de notas para receber: %d\n", total);
    return 0;
}
