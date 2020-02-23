#include <stdio.h>

void main() {
  printf("Digite n\n");
  int a=0;
  scanf("%d", &a);
  for(int i=1; i<=a; i++){
      printf("\n------tabla del %d--------\n", i);
      for(int j=1; j<=10; j++){
         printf("%dX%d=%d\n", i,j,(i*j));
      }
  }
}