#include <stdlib.h>
#include <stdio.h>

int main(){
    int valor1, valor2, valor3,maior, menor;
    printf("Digite o primeiro valor:");
    scanf("%d", &valor1);
    maior = valor1;
    menor = valor1;
    printf("Digite o segundo valor:");
    scanf("%d", &valor2);

    if(valor2 > maior){
        maior = valor2;
    }else if(valor2 < menor){
        menor = valor2;
    }
    printf("Digite o terceiro valor:");
    scanf("%d", &valor3);

    if(valor3 > maior){
        maior = valor3;
    }else if(valor3 < menor){
        menor = valor3;
    }
    int media = (valor1+valor2+valor3)/3, valores[3], i;
    valores[0] = valor1;
    valores[1] = valor2;
    valores[2] = valor3;
    printf("O menor valor eh: %d\n", menor);
    printf("O maior valor eh: %d\n", maior);
    for(i = 0; i < 3; i++){
        if(valores[i] % 2 == 0){
            printf("O numero %d eh par\n", valores[i]);
        }
    }
    printf("A media dos numeros eh: %d\n", media);


    return 0;
}
