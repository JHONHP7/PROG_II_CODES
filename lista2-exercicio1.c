#include <stdlib.h>
#include <stdio.h>

int numeroPrimo(int valor){
    int i, contador = 0;
    for(i = 1; i < valor+1; i++){
        if(valor%i == 0){
            contador = contador + 1;
        }
    }
    if(contador == 2){
        return 0;
    }else if(contador > 2){
        return 1;
    }

}

int main(){
    int valor, resultado;
    printf("Digite um numero para saber se ele eh primo ou nao: ");
    scanf("%d", &valor);
    if(valor == 1){
        printf("O NUMERO %d EH PRIMO", valor);
    }else{
        resultado = numeroPrimo(valor);
        if(resultado == 0){
            printf("O NUMERO %d EH PRIMO", valor);
        }else if(resultado == 1){
            printf("O NUMERO %d NAO EH PRIMO", valor);
        }
    }
    return 0;
}
