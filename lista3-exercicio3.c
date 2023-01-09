#include <stdio.h>
#include <stdlib.h>


int main(){
    int i=5, *p;
    p = &i;
    printf("%x %d %d \n", p, *p+2, 3**p);//%x = Endereço da variavel, o resto e apenas conta

    return 0;
}
