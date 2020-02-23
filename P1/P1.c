#include <stdio.h>

void main() {
  int a=0;
  while(a!=-1){
      printf("Digite las ventas trimestrales (para terminar digite -1)\n");
      scanf("%d", &a);
      float result=0;
      if(a>=0 && a<=20000){
          result=(a*0.05);
      }
      else if(a>20000 && a<=50000){
           result=(a*0.07)+1000;
      }
      else if(a>50000){
          result=(a*0.1)+3100;
      }
      else{
           printf("Valor no permitido\n");
      }
       printf("\nComisión: %f\n", result);
  }
}