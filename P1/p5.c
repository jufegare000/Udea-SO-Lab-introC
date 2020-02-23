#include <stdio.h>

/* declaration */
int calcProgression (int x,int n);
int fpow(int x,int n);

void main() {
  int x=0;
  int n=0;
  printf("Digite X:");
  scanf("%d", &x);
  printf("Digite n:");
  scanf("%d", &n);
  int result=calcProgression(x,n);
  printf("Resultado: %d\n", result);
}

/* definition */
int calcProgression (int x,int n) {
 int result=0;
 for(int i=0; i<=n; i++){
     result+=fpow(x,i);
 }
  return result;
} 

int fpow (int x,int n) {
 int result=1;
 for(int i=1; i<=n; i++){
     result*=x;
 }
  return result;
} 