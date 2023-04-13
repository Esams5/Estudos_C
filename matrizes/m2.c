#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

#define MX 100
#define SFT 0

int main(){
    int m[LIN][COL];

    srand(time(NULL));

    //Preencher matriz
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            m[k][j] = SFT + rand()%MX;
        }
    }

    // Processamento 
    
    // Somatório
    int soma = 0;
    // for (int k=0; k<LIN; k++){
    //     for (int j=0; j<COL; j++){
    //         if (k==j) soma+=m[k][j];
    //     }
    // }
    for (int k=0; k<LIN; k++) soma+= m[k][k]; 

    //Menor e Maior
    int menor = m[0][0];
    int maior = m[0][0];
    for (int k=1; k<LIN; k++){
        if (menor > m[k][k]) menor = m[k][k];
        if (maior < m[k][k]) maior = m[k][k];
    }
    
    // Saída
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            printf("%4d ",m[k][j]);
        }
        printf("\n");
    }
    puts("---");
    printf("Somatório Diagonal Principal: %d\n",soma);
    printf("Menor: %d\t-\tMaior: %d\t-\t Menor + Maior: %d\n",menor, maior, menor+maior);
    puts("---");

    return 0;
}