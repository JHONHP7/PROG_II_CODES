#include <stdio.h>
#include <stdlib.h>


int main(){
    int a1,b1, c1;
    float a2, b2, c2;
    a2 = 3;
    b2 = a2/2;
    c2 = b2 + 3.1;
    printf("Primeiro resultado possivel: %.1f\n", c2);
    a1 = 3;
    b2 = a1/2;
    c2 = b2+ 3.1;
    printf("Segundo resultado possivel: %.1f\n", c2);
    a1 = 3;
    b1 = a1/2;
    c1 = b1+3.1;
    printf("Terceiro resultado possivel: %d\n", c1);
    return 0;
}
