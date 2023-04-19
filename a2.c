#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100
#define SFT 0
void imprimirvetor (int *q, int tamanho);

int main(){
    int n;
    puts("Entre com o tamanho do vetor: ");
    scanf("%d",&n);
    int *p;
    p = malloc(n * sizeof(int));
    if(!p){
        printf("Tamanho insuficiente");
        exit(1);
    }

    srand(time(NULL));
    for (int k = 0; k<n; k++){
        *(p+k) =  SFT + rand() % MX; 
    }
    imprimirvetor(p, n);

    free(p);

    return 0;

}

void imprimirvetor (int *q, int tamanho){
    for (int i = 0; i<tamanho; i++){
        printf("[%p] %d\n", q+i, *(q+i));
    }
}