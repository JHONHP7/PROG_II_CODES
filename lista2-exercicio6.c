#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand((unsigned)time(NULL));
    int tentativa = 101, contador;
    int aleatorio = rand() % 100;
    while(tentativa != aleatorio){
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Tente advinhar o numero sorteado: ");
        scanf("%d", &tentativa);
        fflush(stdin);
        contador = contador + 1;
        if(tentativa == aleatorio){
            printf("Voce acertou o numero!!!\n");
            printf("Total de tentativas: %d\n", contador);
        }else{
            printf("Voce errou o numero :( .\n");
            if(tentativa > aleatorio){
                printf("o numero sorteado eh menor que %d!!\n", tentativa);
            }else{
                printf("o numero sorteado eh maior que %d!!\n", tentativa);
            }
        }
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }
    return 0;
}
