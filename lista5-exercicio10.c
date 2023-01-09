#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>



void main(){
    char loginC[9];
    char senhaC[9];
    char l;
    char s;
    int i = 0;

    char loginA[9];
    char senhaA[9];

    char userOK = 0;
    char senhaOK = 0;

    printf("Digite seu nome de usuario:\t");

    do{
        l = getch();
        if(isalpha(l)!= 0 || isdigit(l)!= 0){
            loginC[i] = l;
            i++;
            printf("%c",l);
        }else if(l == 8 && i){
            loginC[i] = "\0";
            i--;
            printf("\b \b");
        }

    }while(i != 8);
    loginC[i] = '\0';
    i = 0;

      printf("\nDigite sua senha:\t");

    do{
        s = getch();
        if(isalpha(s)!= 0 || isdigit(s)!= 0){
            senhaC[i] = s;
            i++;
            printf("%c",'*');
        }else if(s == 8 && i){
            senhaC[i] = "\0";
            i--;
            printf("\b \b");
        }

    }while(i != 8);
    senhaC[i] = '\0';
    i = 0;

    printf("\n \n");

    printf("Digite o login cadastrado:\t");
    scanf("%s",loginA);
    printf("Digite a senha cadastrada:\t");
    do{
        s = getch();
        if(isalpha(s)!= 0 || isdigit(s)!= 0){
            senhaA[i] = s;
            i++;
            printf("%c",'*');
        }else if(s == 8 && i){
            senhaA[i] = "\0";
            i--;
            printf("\b \b");
        }

    }while(i != 8);
    senhaA[i] = '\0';

    printf("\n \n");

    for(i = 0;i < 8;i++){
        if(loginC[i]!= loginA[i]){
            userOK = 1;
        }
    }

    for (i=0; i < 8; i++){
        if(senhaC[i] != senhaA[i]){
            senhaOK = 1;
        }
    }

    if(userOK == 0 && senhaOK == 0){
        printf("ACESSO CONCEDIDO!BEM VINDO!");
    }else{
        printf("ACESSO NEGADO!USUARIO OU SENHA INCORRETOS!TENTE NOVAMENTE!");
    }

}
