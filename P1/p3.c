#include <stdio.h>

void main() {
  printf("Digite el numero de renglones n\n");
  int a=0;
  scanf("%d", &a);
  printf("\n");
  int numDigits=1;
  for(int i=1; i<=a; i++){
     for(int j=0; j<numDigits; j++){
         if(i%2!=0){
            if(j%2==0){
            printf("1");
            }
            else{
                printf("0");
            }
         }
         else{
             if(j%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
         }
         
     }
      printf("\n");
     numDigits++;
  }
}