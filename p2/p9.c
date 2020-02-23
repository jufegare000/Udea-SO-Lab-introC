#include "shared.h"
#include <stdio.h>

char ok_messages[4][25] = {
                             "Muy bien!",
                             "Excelente!",
                             "Buen trabajo!",
                             "Sigue haciéndolo bien!"
                         };

char error_messages[4][35] = {
                             "No. Por favor trata de nuevo.",
                             "Incorrecto. Trata una vez más.",
                             "No te rindas!",
                             "No. Trata de nuevo"
                         };


int get_random_message(int messages);

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
           printf("\n%s\n",error_messages[generar_aleatorio(0,3)]);
           printf("¿Cuánto es %d veces %d?: ",num1,num2);
           scanf("%d", &userResult);
           if(userResult==-1){
               return;
           }
      }
      printf("\n%s\n",ok_messages[generar_aleatorio(0,3)]);
  }
}

