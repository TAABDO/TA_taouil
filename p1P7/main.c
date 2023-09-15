#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[3];
	printf("entre un nombre:\n");
	scanf("%s",a);
	printf("le nombre invers a:%s",strrev(a));
	
	
	return 0;
}
