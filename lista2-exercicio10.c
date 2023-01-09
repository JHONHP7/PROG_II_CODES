#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y){
    int num, i;

    for(i = 1; i<y+1; i++){
        if(x % i ==0 && y % i == 0){
            num = i;
            }
        }
    return num;
}

int main(){
    int x, y, maiorDivisor;
    printf("Digite 2 numeros para ver o MDC.\n");
    printf("Digite o x: ");
    scanf("%d", &x);
    printf("Digite o y: ");
    scanf("%d", &y);
    maiorDivisor = mdc(x, y);
    printf("O mdc dos dois numeros eh de: %d", maiorDivisor);
    return 0;
}
