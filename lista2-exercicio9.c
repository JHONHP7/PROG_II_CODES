#include <stdio.h>
#include <stdlib.h>

int pot(int base, int expoente){
    int resultado = 1;
    while(expoente > 0){
        resultado = resultado*base;
        expoente--;
    }
    return resultado;
}

int qtdNumeros(int valor){
    int cont = 0;
    while(valor>=1){
        valor = valor / 10;
        cont++;
    }

    return cont;
}



int inverte(int valor){
    int invertido = 0, contador;
    contador = qtdNumeros(valor);
    while(valor>=1){
        invertido = invertido+(valor%10)*pot(10, contador-1);
        valor =valor/10;
        contador--;
    }
    return (invertido);
}


int main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("O numero invertido eh igual: %d\n", inverte(numero));
    //printf("Qtd: %d", qtdNumeros(numero));
    return 0;
}
