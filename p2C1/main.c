#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int a;
	printf("enter un nombre:");
	scanf("%i",&a);
	
	if (a % 2 == 0){
		
		printf("le nombre est paire");
		
	}
	else {
				printf("le nombre est impaire");

	}
	
	return 0;
}
