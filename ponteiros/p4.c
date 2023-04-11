#include <stdio.h>

int main(){
    int x = 10;

    int *p = &x;

    int **q = NULL;

    q = &p;

    printf("[%p] p : %p - %p\n",q,p,&x);
    printf("[%p] x : %d\n",*q,**q);
    
    printf("%d\n",**q);

    return 0;


}