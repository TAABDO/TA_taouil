#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N1 , N2 , some;
	printf("enter le premier nombre:\n");
	scanf("%i",&N1);
	printf("enter le deuxieme nombre:\n");
	scanf("%i",&N2);
	
		some = (N1 + N2)*3;
	if(N1==N2){
		
		printf("le resultas est %i",some);
	}
	else{
	printf("les nomber sont pas le meme:");
	}
	
	return 0;
}
