#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int a , b, c , some , Moyenne ;
	
	printf("enter a :\n");
	scanf("%i",&a);
	printf("enter b :\n");
	scanf("%i",&b);
	printf("enter c :\n");
	scanf("%i",&c);
	some = a+b+c;
	printf("la some est:\ %i\n", some);
	Moyenne = some/3;
	printf("la Moyenne est:\ %i\n", Moyenne);
	
	return 0;
}
