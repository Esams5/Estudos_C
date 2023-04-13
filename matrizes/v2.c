// Inverter vetor

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define QTD 10
#define SFT 20

int main(){
    int v[TAM];

    srand(time(NULL));

    // Entrada dos Dados
    for(int k=0; k<TAM; k++) v[k] = (rand() % QTD) + SFT; 

    // Processamento
    int y[TAM];
    for (int k=0; k<TAM; k++){
        y[(TAM-1)-k] = v[k];
    }

    // Saída
    for (int k =0; k<TAM; k++ ){
        printf("[%d]\tv: %d - y: %d\n",k,v[k],y[k]);
    }

    return 0;
}