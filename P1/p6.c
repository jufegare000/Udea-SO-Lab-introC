#include <stdio.h>

/* declaration */
int calcProgression (int x);
int fpow(int x,int n);
int factorial(int in);

void main() {
  int x=0;
  int n=0;
  printf("Digite X:");
  scanf("%d", &x);
  int result=calcProgression(x);
  printf("Resultado: %d\n", result);
}

/* definition */
int calcProgression(int x) {
 int result=0;
 int signo;
 for(int i=0; i<x; i++){
     if(i%2 == 0){
         signo = 1;
     }else {
         signo = -1;
     }
     result= result + (signo*fpow(x,i)/factorial(i));
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

int factorial(int n) {
    if(n == 0){
        return 1;
    }else {
        return n*factorial(n-1);
    }
}