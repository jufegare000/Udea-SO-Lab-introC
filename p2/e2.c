#include "shared.h"
#include <time.h>   //time()
#include <stdio.h>


void imprimir_moneda(int lado);

int main (void) {
    srand(time(NULL)); //genera la semilla
    int lanzamientos, lado;
    int num_caras = 0, num_sellos = 0;
    printf("Digite el numero de lanzamientos: ");
    scanf("%d", &lanzamientos);
    for (int i = 0; i < lanzamientos; i++) {
        lado = generar_aleatorio(0,1);
        if (lado == 1) {
            num_sellos++;            
        }
        else {
            num_caras++;
        }
        imprimir_moneda(lado);
    }
    printf(", #de caras = %d, # de sellos = %d\n",num_caras,num_sellos);
    return 0;
}

void imprimir_moneda(int lado) {
    if(lado == 1) {
        printf("S");
    }
    else {
        printf("C");
    }
}