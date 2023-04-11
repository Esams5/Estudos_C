#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 100
#define SFT 0

int main(){
    int v[TAM];
    int *p = NULL;

    // Relaciona o ponteiro com o primeiro elemento de v.
    p = v;

    // Gerar os números
    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        *(p+k) = (rand() % MX) + SFT;
    }

    // Imprimir os números
    for (int k=0; k<TAM; k++){
        printf("[%p] %d - %d - %d - %d\n",p+k,*(p+k),*(v+k),v[k],p[k]);
    }
    puts("====");

    // Imprimir SOMENTE os números PARES
    for (int k=0; k<TAM; k++){
        if (!(*(p+k) % 2)){
            printf("[%p] %d - %d - %d - %d\n",p+k,*(p+k),*(v+k),v[k],p[k]);
        }    
    }

    return 0;
}