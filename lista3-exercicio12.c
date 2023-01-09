#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
    char a[80], cont = 0;
    printf("Digite um frase caracter por caracter: ");
    while(cont < 80){
        a[cont] = getch();
        if(a[cont] == '\r'){
            break;
        }
        cont = cont + 1;
    }
    printf("\n-----------------------\n");
    printf("%s", a);
    return 0;
}
