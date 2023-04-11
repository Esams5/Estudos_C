#include <stdio.h>

int main(){

    int p; 
    char ch;

    puts("Entre com um inteiro: ");
    scanf("%d",&p);
    // getchar();
    fflush(stdin);

    puts("Entre com um char: ");
    scanf("%c",&ch);

    printf("int: %d\n",p);
    printf("char: %c\n",ch);

    return 0;

}