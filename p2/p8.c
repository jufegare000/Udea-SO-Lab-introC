#include "shared.h"
#include <stdio.h>

void main (void) {
  int num1, num2, result;
  int userResult=0;
  printf("--------------------------------------------------\n");
  printf("Para terminar el programa digite -1\n");
  printf("--------------------------------------------------\n");
  while(userResult!=-1){
      num1= generar_aleatorio(1,10);
      num2=generar_aleatorio(1,10);
      printf("¿Cuánto es %d veces %d?: ",num1,num2);
      scanf("%d", &userResult);
      if(userResult==-1){
            return;
      }
      result=num1*num2;
      while(result!=userResult){
           printf("\nNo. Por favor intenta nuevamente\n");
           printf("¿Cuánto es %d veces %d?: ",num1,num2);
           scanf("%d", &userResult);
           if(userResult==-1){
               return;
           }
      }
      printf("\n¡Muy bien!\n");
  }
}
