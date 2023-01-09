#include <stdio.h>
#include <stdlib.h>

int main(){
  int segundos, horas, minutos;
  printf("Informe o numero de segundos: ");
  scanf("%d",&segundos);
  printf("%d segundos ",segundos);
  horas = segundos / 3600;
  segundos = segundos % 3600 ;
  minutos = segundos / 60;
  segundos = segundos % 60 ;
  printf("equivalem a %d horas %d minutos %d segundos\n",horas,minutos,segundos);

  return 0;
}
