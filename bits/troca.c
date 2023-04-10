#include <stdio.h>

int main(){
	int a = 10;  // 1010
	int b = 7;   // 0111

	a = a ^ b;   // 1101  
	b = a ^ b;   // 1010
	a = a ^ b;

    // Troca os valores!

	printf("a = %d, b = %d\n",a,b);

	return 0;

}