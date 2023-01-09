#include <stdlib.h>
#include <stdio.h>

void media(float nota1, float nota2, float nota3){
    float med;
    med = (nota1+nota2+nota3)/3;
    if(med >= 6){
        printf("A nota foi %.1f, o aluno esta aprovado", med);
    }else if(med < 6 && med >= 4){
        printf("A nota foi %.1f, o aluno tera que fazer a VS", med);
    }else{
        printf("A nota foi %.1f, o aluno esta reprovado", med);
    }


}
int main(){
    float nota1, nota2, nota3;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media(nota1, nota2, nota3);
    return 0;
}
