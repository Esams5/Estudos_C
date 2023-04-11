// Vetor de ponteiros

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MX 100
#define SFT 0

void imprimirVetor(int *, int);

int main(){
    int x[TAM];
    int *pm[2]; // [0] menor, [1] maior

    // Gerar os dados
    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        *(x+k) = SFT + rand() % MX;
    }

    imprimirVetor(x, TAM);
    
    // Processamento
    pm[0] = x; 
    pm[1] = x;
    
    for (int k=1; k<TAM; k++){
        if (*pm[0] > *(x+k)) pm[0] = x+k;
        if (*pm[1] < *(x+k)) pm[1] = x+k;
    }

    // Saída
    puts("===");
    printf("Menor: %p\n",pm[0]);
    printf("Maior: %p\n",pm[1]);
    
    return 0;
}

void imprimirVetor(int *p, int tamanho){
    for (int k=0; k<tamanho; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }
}