#include <stdio.h>
#include <string.h>

#define TAM 5

int main(){
    char str1[TAM], str2[TAM];

    puts("Entre as palavras: ");
    gets(str1);
    gets(str2);

    printf("[%d] %s\n",strlen(str1),str1);
    printf("[%d] %s\n",strlen(str2),str2);
    return 0;
}
