#include <stdio.h>

#define TAM 5

int main(){
    char str[TAM];
    char str2[] = "Oi turma";
    char str3[] = {'I','F','C','E','\0'};

    for (int k=0; k<TAM-1; k++){
        scanf("%c",&str[k]);
        // getchar();
        fflush(stdin);
    }

    str[TAM-1] = '\0'; 
    
    printf("%s\n",str);

    printf("%s\n",str2);

    printf("%s\n",str3);

    return 0;
}