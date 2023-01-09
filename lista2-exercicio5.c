#include <stdio.h>
#include <stdlib.h>

void mostrarSoma(int valor1, int valor2){
    int soma = 0;
    do{
        soma = soma + valor1;
        if(soma > valor2){
            printf("%d=", valor1);
        }else{
            printf("%d+", valor1);
            valor1 = valor1 + 1;
        }

    }while(soma < valor2);
    printf("%d)", soma);

}


int main(){
    int x = 1, z = 0, soma, i, contador, x2;
    printf("Digite X: ");
    scanf("%d", &x);
    x2 = x;
    printf("Digite Z: ");
    scanf("%d", &z);
    while(x > z){
        printf("Z tem que ser maior que X\n");
        printf("Digite novamente!! \n");
        printf("Digite X: ");
        scanf("%d", &x);
        x2 = x;
        printf("Digite Z: ");
        scanf("%d", &z);
    }
    for(i = 0; i < z; i++){
        if(soma < z){
            soma = soma + x;
            x = x + 1;
            contador = contador + 1;
        }else{
            break;
        }
    }
    printf("\n");
    printf("O quantos de numeros inteiros que devemos somar (A partir do X)\nem sequencia para que a soma ultrapasse a Z\n");
    printf("\n");
    printf("A contagem eh de: %d(", contador);
    mostrarSoma(x2, z);
    printf("\n");
    return 0;
}
