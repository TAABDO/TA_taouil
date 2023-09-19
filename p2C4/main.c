#include <stdio.h>
//#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//declaration des variable

int a,b,c;
int delta;
//demande a l utilisateur les donnes
printf("entrer b:\n");
scanf("%i",&b);
printf("entrer a:\n");
scanf("%i",&a);
printf("entrer c :\n");
scanf("%i",&c);

//la fonction du Calculer delta
	delta = b*b - 4*a*c; 

if(delta  == 0){
		printf("il ya deux soltion");
}
else if(delta < 0){
	printf("n'a pas de solution");
	
}else if (delta > 0){
	printf("il y une seule solution");
}else {
	printf("entere les nombres:");
}

	return 0;
}
