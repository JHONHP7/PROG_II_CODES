#include <stdio.h>
#include <stdlib.h>

int divs(int num, int *max, int *min){
    int i, cont = 0;
    *max = 1;
    *min = 100;
    for(i=1; i<num+1;i++){
        if(num % i == 0){
            cont = cont + 1;
            if(i>*max && i<num){
                *max = i;
            }
            if(i<*min && i>1){
                *min = i;
            }
        }
    }
    if(cont == 2){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int num, maximo, minimo, primo;
    int *max, *min;
    max = &maximo;
    min = &minimo;
    printf("Digite um numero para saber se eh primo ou nao: ");
    scanf("%d", &num);
    primo = divs(num, max, min);
    if(primo == 0){
        printf("O numero eh primo!!");
    }else{
        printf("O numero nao eh primo!!\n");

    }
    return 0;
}
