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
  int count_assert=0;
  int total_count=0;
  printf("--------------------------------------------------\n");
  printf("Para terminar el programa digite -1\n");
  printf("--------------------------------------------------\n");
  while(userResult!=-1){
      num1= generar_aleatorio(1,10);
      num2=generar_aleatorio(1,10);
      printf("¿Cuánto es %d veces %d?: ",num1,num2);
      scanf("%d", &userResult);
      if(userResult==-1){
            break;
      }
      result=num1*num2;
      while(result!=userResult){
           total_count++;
           printf("\n%s\n",error_messages[generar_aleatorio(0,3)]);
           printf("¿Cuánto es %d veces %d?: ",num1,num2);
           scanf("%d", &userResult);
           if(userResult==-1){
               break;
           }
      }
       if(userResult!=-1){
           total_count++;
           count_assert++;
           printf("\n%s\n",ok_messages[generar_aleatorio(0,3)]);
      }
      
     
  }

  double final_score=((double)count_assert/(double)total_count);

  printf("aciertos: %d -- total: %d -- score: %f\n",count_assert,total_count,final_score);

  if(final_score<0.75){
      printf("Por favor pídele ayuda al instructor\n");
  }
  
}

