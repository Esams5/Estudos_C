#include <stdio.h>


int main(){

    int x, y, s;
    int *px = &x, *py = NULL, *ps = NULL;

    py = &y;
    ps = &s;

    puts("Entre com o valor: ");
    scanf("%d",px); // scanf("%d",&x);

    puts("Entre com o outro valor: ");
    scanf("%d",py); // scanf("%d",&y);

    *ps = *px + *py;

    printf("Soma de %d com %d = %d\n",*px, *py, *ps);
    printf("Endereços: x: %p, y: %p, s: %p\n",px, py, ps);

    return 0;
}
