#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 4


int main(){
    int cont = 1, i,io, idade, contF = 0, contM = 0;
    float altura = 0, alt[4], soma = 0, mediaAltura =0, somaVariancia = 0, variancia = 0;
    char s, sex;

    printf("Voce ira digitar a idade, altura e o sexo de 4 pessoas:\n");
    for(i=0;i<TAM;i++){
        printf("\nDigite a idade da %d pessoa: ", cont);
        scanf("%d", &idade);
        printf("\nDigite a altura da %d pessoa (responda assim A.AA, em metros): ", cont);
        scanf("%f", &altura);
        alt[i] = altura;
        printf("\n%g", alt[i]);
        printf("\nDigite o sexo da %d pessoa (responda com M ou F apenas): ", cont);
        scanf("%c", &s);
        sex = toupper(s);
        soma = soma + alt[i];
        /*if((idade >20 && idade<35) && sex == 'F'){
            contF = contF + 1;
        }
        if(sex == 'M' && alt[i] > 1.80){
            contM = contM + 1;
        }*/
        cont = cont + 1;
    }
    printf("O total de mulheres com idades entre 20 e 35 anos eh de: %d\n", contF);
    printf("O total de homens com altura maior que 1.80m eh de: %d\n", contM);
    mediaAltura = soma/TAM;
    for(io=0;io<TAM;io++){
        somaVariancia = somaVariancia + ((alt[i] - mediaAltura)*(alt[i] - mediaAltura));
    }
    variancia = somaVariancia/TAM;
    printf("A variancia de altura eh de: %.2f metros\n", variancia);
    return 0;
}
