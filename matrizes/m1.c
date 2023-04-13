#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 5

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


    // Saída
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            printf("%4d ",m[k][j]);
        }
        printf("\n");
    }

    return 0;
}