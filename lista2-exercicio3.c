#include <stdio.h>
#include <stdlib.h>

void fibonacci(int valor){
    int t1, t2, t3, i;
    t1 = 1;
    t2 = 1;
    printf("%d %d ", t1, t2);
    for(i = 0; i < valor-2; i++){
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }

}

int main(){
    int quantidade;
    printf("Digite quantos termos voce quer ver da fibonacci: ");
    scanf("%d", &quantidade);
    fibonacci(quantidade);
    return 0;
}
