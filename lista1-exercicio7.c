#include <stdio.h>
#include <stdlib.h>


int main(){
    int numArredondado, op;
    float num;
    printf("Digite um numero float: ");
    scanf("%f", &num);
    printf("Se quiser arredondar o numero para cima digite 1\n");
    printf("Se quiser arredondar o numero para baixo digite 2\n");
    printf("Digite sua escolha: ");
    scanf("%d", &op);
    switch(op){
        case 1:
            numArredondado = ceil(num);
            printf("O numero fica assim: %d", numArredondado);
            break;
        case 2:
            numArredondado = floor(num);
            printf("O numero fica assim: %d", numArredondado);
            break;
        default:
            printf("Escolha invalida, tente novamnete");
    }

}
