#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

int main(){
    int qtdLin, qtdCol;

    puts("Entre com a quantidade de linhas: ");
    scanf("%d",&qtdLin);

    puts("Entre com a quantidade de colunas: ");
    scanf("%d",&qtdCol);     

    int **m;

    // Exercício: Validação dos ponteiros resultantes do malloc.

    m = (int **) malloc(qtdLin * sizeof(int *));

    for (int k=0; k<qtdLin; k++){
        // Exercício: // Substitua a indexação por deslocamento a partir do ponteiro.
        m[k] = malloc(qtdCol * sizeof(int)); 
    }
    
    srand(time(NULL));

    for (int k=0; k<qtdLin; k++){
        for (int j=0; j<qtdCol; j++){
            *(*(m+k) + j) = rand() % MX;
        }
    }

    for (int k=0; k<qtdLin; k++){
        for (int j=0; j<qtdCol; j++){
            printf("%5d ", *(*(m+k) + j));
        }
        printf("\n");
    }

    // Exercício: Use o free para deslocar o espaço requisitado.

    return 0;
}