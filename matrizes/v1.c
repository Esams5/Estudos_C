// Vetor de Notas - Calcular a média e Informar se Aprovado/Reprovado.

#include <stdio.h>

#define TAM 5

int main(){
    double notas[TAM], media;

    //Entrada de Dados
    // puts("Digite as notas: ");
    // for (int k=0; k<TAM; k++) scanf("%lf",&notas[k]);
    
    for (int k=0; k<TAM; k++){
        printf("Digite a nota %d: ",k+1);
        scanf("%lf",&notas[k]);
    }    

    // Processamento
    for (int k=0; k<TAM; k++) media += notas[k]/TAM;
    
    // double soma;
    // for (int k=0; k<TAM; k++){
    //     soma += notas[k];
    // }
    // media = soma / TAM;

    // Saída
    printf("Media: %.2lf -  %s\n",media, (media<7.0)?"reprovado":"aprovado");

    return 0;
}