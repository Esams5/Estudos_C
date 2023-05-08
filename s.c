#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main(int argc, char *argv[]){
    int qtdLina, qtdCola;
    int qtdLinb, qtdColb;
    int qtdLinc, qtdColc;

    qtdLina = atoi(argv[1]);
    qtdCola = atoi(argv[2]);

    qtdLinb = atoi(argv[1]);
    qtdColb = atoi(argv[2]);
 
    int **a;
    int **b;
    int **c;

    
    a = (int **) malloc(qtdLina * sizeof(int *));
    b = (int **) malloc(qtdLinb * sizeof(int *));
    c = (int **) malloc(qtdLinc * sizeof(int *));

    for (int k=0; k<qtdLina; k++){
        
        a[k] = malloc(qtdCola * sizeof(int));
        b[k] = malloc(qtdColb * sizeof(int));
        c[k] = malloc(qtdCola * sizeof(int));  
    }
    
    srand(time(NULL));

    for (int k=0; k<qtdLina; k++){
        for (int j=0; j<qtdCola; j++){
            *(*(a+k) + j) = rand() % MX;
            *(*(b+k) + j) = rand() % MX;

        }
    }

    for (int k=0; k<qtdLina; k++){
        for (int j=0; j<qtdCola; j++){
            printf("%5d ", *(*(a+k) + j));
        }
        printf("\n");
    }

    printf("\n");

    for (int k=0; k<qtdLinb; k++){
        for (int j=0; j<qtdColb; j++){
            printf("%5d ", *(*(b+k) + j));
        }
        printf("\n");
    }

    for (int k=0; k<qtdLinb; k++){
        for (int j=0; j<qtdColb; j++){
            *(*(c+k) + j) = *(*(a+k) + j) * *(*(b+k) + j);
        }
    }
    printf("\n");

    for (int k=0; k<qtdLinb; k++){
        for (int j=0; j<qtdColb; j++){
            printf("%5d ", *(*(c+k) + j));
        }
        printf("\n");
    }

    return 0;
}