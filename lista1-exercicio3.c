#include <stdlib.h>
#include <stdio.h>

int main(){
    char escolha;
    int numero1, numero2;
    printf("Pressione '+' se quiser fazer uma adição\n");
    printf("Pressione '-' se quiser fazer uma subtracao\n");
    printf("Pressione '/' se quiser fazer uma divisao\n");
    printf("Pressione '*' se quiser fazer uma multiplicacao\n");
    printf("Escolha a conta desejada: ");
    scanf("%c", &escolha);
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    int resultado;
    switch(escolha){
        case '+':
            resultado = numero1 + numero2;
            printf("O resultado da sua conta eh: %d", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("O resultado da sua conta eh: %d", resultado);
            break;
        case '/':
            resultado = numero1/numero2;
            printf("O resultado da sua conta eh: %d", resultado);
            break;
        case '*':
            resultado = numero1*numero2;
            printf("O resultado da sua conta eh: %d", resultado);
            break;
        default:
            printf("Escolha incorreta, tente novamente");
            break;

    }


    return 0;
}
