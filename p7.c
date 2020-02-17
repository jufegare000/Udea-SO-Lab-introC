#include <math.h>
#include <stdio.h>
#include <stdlib.h>


/* declaration */
int tamanio(int x);
void alRevez(int x, int tam);

void main() {
  int x=0;
  int n=0;
  printf("Digite X:\n");
  scanf("%d", &x);
  int tam = tamanio(x);
  alRevez(x, tam);
}

int tamanio(int x){
    int absolut = abs(x);
    int log = (int)log10(absolut);
    return (int)floor(log)+1;
}

void alRevez(int x, int tam){
    char num[tam];
    sprintf(num, "%d", x); 

    for (int i = tam; i >= 0; i--){
        printf("%c", num[i]);
    }
}