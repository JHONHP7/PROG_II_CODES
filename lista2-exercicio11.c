#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, z, potencia;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &z);
    potencia = pow(x, z);
    printf("A potenciaeh igual: %d", potencia);

    return 0;
}
