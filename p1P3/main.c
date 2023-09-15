#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		int a,b ;
		float quot,reste;
	printf("entre a:\n");
	scanf("%d",&a);
	printf("entre b:\n");
	scanf("%d",&b);
	
	
		printf("somme est: %.1f\n", (float)a+b);
		printf("Subtraction est: %.1f\n",(float)a-b);
		printf("Multiplication est : %.1f\n",(float)a*b);
		printf("Division est : %.1f\n",(float)a/b);
		printf("Modulus est: %.1f\n", a%b);
		
		quot =a/b;
		
		printf("%f\n",quot);
		reste = a%b;
		
		printf("%f\n",reste);
		
		
		
		
		
	return 0;
}
