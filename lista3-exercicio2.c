#include <stdio.h>
#include <stdlib.h>


int main(){
    int i=3,j=5, a;
    int *p, *q;
    p = &i;
    q = &j;
    printf("resultado de p == &i: %d\n", p == &i);// da 1 porque o 1 é == a verdadeiro
    printf("resultado de *p - *q: %d\n", *p - *q);//-2 ja que 3 - (+5) = -2
    printf("resultado de **&p: %d\n", **&p);
    printf("resultado de 3* - *p/(*q)+7: %d\n", 3* - *p/(*q)+7);//lembrando que da esse resultado porque nao esta separado por parenteses

    return 0;
}
