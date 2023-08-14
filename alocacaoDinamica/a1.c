#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100
#define SFT 0

void imprimirVetor(unsigned int *, int);

int main(){
    int n;

    puts("Entre com o tamanho do vetor: ");
    scanf("%d",&n);

    unsigned int *p;
    p = malloc(n * sizeof(unsigned int));

    if (!p){
        puts("Não existe memória disponível. Tente novamente.");
        exit(1);
    }

    srand(time(NULL));
    for(int k=0; k<n; k++){
        *(p+k) = SFT + rand() % MX; 
    }
    
    imprimirVetor(p, n);

    free(p);

    return 0;

}

void imprimirVetor(unsigned int *q, int tamanho){

    for (int k=0; k<tamanho; k++){
        printf("[%p] %u\n",q+k,*(q+k));
    }

}