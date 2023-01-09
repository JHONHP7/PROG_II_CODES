#include <stdio.h>
#include <stdlib.h>
#define LUGARES 100

int main(){
    printf("Responda o formulario porfavor: \n");
    int PORrespostasBom, PORrespostasRegular;
    int i, idade, escolha, respostasOtimas = 0, respostasBom = 0, respostasRegular = 0, resp, respostasRuim = 0, dif;
    int somaIdades = 0, maiorIdadePessimo = 0, respostasPessima = 0, maiorIdadeOtimo = 0, maiorIdadeRuim = 0, media, porcentagem;
    for(i=0;i<LUGARES;i++){
        printf("Responda sua idade por favor: ");
        scanf("%d", &idade);
        printf("Sua opinião em relação ao filme:\n");
        printf("Digite 1 se o filme foi Otimo. \n");
        printf("Digite 2 se o filme foi Bom. \n");
        printf("Digite 3 se o filme foi Regular. \n");
        printf("Digite 4 se o filme foi Ruim. \n");
        printf("Digite 5 se o filme foi Pessimo. \n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);
        printf("\n");
        switch(escolha){
            case 1:
                respostasOtimas = respostasOtimas + 1;
                if(maiorIdadeOtimo<idade){
                    maiorIdadeOtimo = idade;
                }
                break;
            case 2:
                respostasBom = respostasBom + 1;
                break;
            case 3:
                respostasRegular = respostasRegular + 1;
                break;
            case 4:
                if(maiorIdadeRuim<idade){
                    maiorIdadeRuim = idade;
                }
                respostasRuim =  respostasRuim + 1;
                somaIdades = somaIdades + idade;
                break;
            case 5:
                if(maiorIdadePessimo<idade){
                    maiorIdadePessimo = idade;
                }
                respostasPessima = respostasPessima + 1;
                break;
            default:
                printf("Escolha invalida.");
                break;

        }
    }
    printf("A quantidade de respostas otimas foi: %d\n", respostasOtimas);
    printf("\n");
    PORrespostasRegular = (respostasRegular*100)/LUGARES;
    PORrespostasBom = (respostasBom*100)/LUGARES;
    if(PORrespostasBom>PORrespostasRegular){
        resp = PORrespostasBom-PORrespostasRegular;
        printf("A diferenca de percentual entre as respotas 'Bom' e 'Regular' foi que tivemos %d porcento de respostas 'Bom' a mais que as respostas 'Regular'\n", resp);
        printf("\n");
    }else if(PORrespostasBom<PORrespostasRegular){
        resp = PORrespostasRegular-PORrespostasBom;
        printf("A diferenca de percentual entre as respotas 'Bom' e 'Regular' foi que tivemos %d respostas 'Regular' a mais que as respostas 'Bom'\n", resp);
        printf("\n");
    }else{
        printf("Tivemos o mesmo percentual de numeros de respostas 'Bom' e 'Regular'\n");
        printf("\n");
    }
    media = somaIdades/respostasRuim;
    porcentagem = (respostasPessima*100)/LUGARES;
    printf("Tivemos o total de %d pessoas que reponderam 'Ruim', a media de idade deles eh de: %d\n", respostasRuim, media);
    printf("\n");
    printf("A porcentagem de pessoas que responderam 'Pessimo' foi de: %d por cento\n", porcentagem);
    printf("\n");
    printf("A maior idade da pessoa que respondeu 'Pessimo' foi de: %d\n", maiorIdadePessimo);
    printf("\n");
    if(maiorIdadeOtimo>maiorIdadeRuim){
        dif = maiorIdadeOtimo-maiorIdadeRuim;
        printf("a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim foi de %d\n", dif);
        printf("\n");
    }else if(maiorIdadeOtimo<maiorIdadeRuim){
        dif = maiorIdadeRuim-maiorIdadeOtimo;
        printf("a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim foi de %d\n", dif);
        printf("\n");
    }else{
        printf("Nao ha diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim\n");
        printf("\n");
    }


    return 0;
}

