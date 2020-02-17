#include <stdio.h>

/* declaration */
int isMultiple (int num,int num2); 

void main() {
  int a=0;
  int b=0;
  while(a>=0 && b>=0){
      printf("Digite dos numeros enteros (para terminar digite un valor negativo o 0)\n");
      printf("Num1:");
      scanf("%d", &a);
      if(a<=0){
       break;
      }
      printf("\nNum2:");
      scanf("%d", &b);
      if(b<=0){
        break;
      }

      int result=isMultiple(a,b);
      printf("%d es múltiplo de %d:%d\n", a,b,result);
  }
}

/* definition */
int isMultiple (int num,int num2) {
  if(num%num2==0){
      return 1;
  }
  return 0;
} 