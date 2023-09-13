#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int C;
	double F;
	printf("enter la température en Fahrenheit:");
	scanf("%lf",&F);
	C = (F-32)/1.8;
	printf("la température en Celsius est :%i",C);
	
	return 0;
}
