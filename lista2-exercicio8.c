#include <stdio.h>
#include <stdlib.h>

void numerosEstranho(){
    int i, a1, num1;
    float a;
    printf("Os numeros com essa caracteristicas sao apenas: ");
    for(i=1000; i<10000; i++){
        a = i;
        a1 = a/100;
        a = a/100;
        num1 = round((a - a1)*100);
        if((a1+num1)*(a1+num1) == i){
            printf("%d-", i);
        }

    }

}

int main(){
    printf("Iremos mostrar todos os numeros de 1000 a 9999 que tem essa caracteristica: \n");
    printf("3025 = 30 + 25 = 55 -> 55*55 = 3025.\n");
    printf("\n");
    numerosEstranho();
    printf("\n");


}
