#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(){
    srand((unsigned)time(NULL));
    char letra, sorteado;
    int letraPessoa;
    printf("Tente adivinhar a letra sorteada: ");
    scanf("%c", &letra);
    int aleatorio = (rand() % 25)+65;
    sorteado = aleatorio;
    if(sorteado == toupper(letra)){
        printf("\n");
        printf("A letra sorteada foi: %c\n", sorteado);
        printf("A letra que voce colocou foi: %c\n", toupper(letra));
        printf("Parabens voce acertou!!!\n");
    }else{
       if(toupper(letra)>sorteado){
            printf("\n");
            printf("Que pena voce errou, tente novamente.\n");
            printf("A sua letra eh maior do que a sorteada.\n");
            printf("\n");
            printf("\n");
            printf("A letra sorteada foi: %c\n", sorteado);
            printf("A letra que voce colocou foi: %c\n", toupper(letra));
       }else if(toupper(letra)<sorteado){
            printf("\n");
            printf("Que pena voce errou, tente novamente.\n");
            printf("A sua letra eh menor do que a sorteada.\n");
            printf("\n");
            printf("\n");
            printf("A letra sorteada foi: %c\n", sorteado);
            printf("A letra que voce colocou foi: %c\n", toupper(letra));
       }
    }
}
