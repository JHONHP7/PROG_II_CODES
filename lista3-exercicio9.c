#include <stdio.h>
#include <stdlib.h>

int main(){
    int pulo[9] = {1,2,3,4,5,6,7,8,9};
    printf("%d, letra a porque a contagem do vetor comeca em 0, logo o terceiro item sera na posicao 2", *(pulo + 2));
    return 0;
}
