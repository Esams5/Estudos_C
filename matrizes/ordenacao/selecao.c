#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define RG 50 // faixa 
#define SF 0 // deslocamento

void imprimirVetor(unsigned x[], unsigned t);

int main(){
    unsigned v[TAM]; // unsigned int

    srand(time(NULL));

    // Dados
    for (int k=0; k<TAM; k++){
        v[k] = (rand() % RG) + SF;
    }
    puts("Vetor NÃO ordenado: ");
    imprimirVetor(v,TAM);

    // Processamento - Ordenação por Seleção - Decrescente. 
    // unsigned a;
    for (int k=0; k<TAM-1; k++){
        for (int j=k+1; j<TAM; j++){
            if (v[k]<v[j]){
                v[k] = v[k] ^ v[j]; 
                v[j] = v[k] ^ v[j]; 
                v[k] = v[k] ^ v[j]; 

                // a = v[k];
                // v[k] = v[j];
                // v[j] = a;  
            }          
        }
    }

    //Saída
    puts("Vetor ordenado : ");
    imprimirVetor(v,TAM);

    return 0;
}

void imprimirVetor(unsigned x[], unsigned t){
    for (int k=0; k<t; k++){
        printf("%u ",x[k]);
    }
    printf("\n");
}

