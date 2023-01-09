#include <stdio.h>
#include <stdlib.h>

int salarioSemanal(int horas, float valorHora){
    int i, cont40, cont60;
    int soma = 0;
    if(horas <= 40){
        for(i = 0; i < horas; i++){
            soma = soma + valorHora;
        }
    }else if(horas > 40 && horas <= 60){
        soma = (40 * valorHora);
        cont40 = horas - 40;
        valorHora = valorHora * 1.5;
        soma = soma + (cont40*valorHora);
    }else{
        soma = (40 * valorHora);
        cont60 = horas - 60;
        soma = soma + (cont60 *(valorHora+valorHora));
        valorHora = valorHora * 1.5;
        soma = soma + (20*valorHora);
    }

    return soma;
}


int main(){
    int horasTrabalhadas, salario;
    float valorDaHora;
    printf("Digite quantas horas sao trabalhadas: ");
    scanf("%d", &horasTrabalhadas);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorDaHora);
    salario = salarioSemanal(horasTrabalhadas, valorDaHora);
    printf("O salario semanal eh de: %d reais", salario);
    return 0;
}
