#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age, numtele;
	char Nom[10],Prenom[10],Sexe[10];
	
	 printf("enter votre Nom:\n");
	 scanf("%s",Nom);
	 printf("enter votre Prenom:\n");
	 scanf("%s",Prenom);
	 printf("enter votre age:\n");
	 scanf("%i",&age);
	 printf("enter votre Sexe:\n");
	 scanf("%s",Sexe);
	 printf("enter votre numtele:\n");
     scanf("%i",&numtele);
     printf("Nom est :%s \n Prenom est :%s \n age est:%i \n Sexe est :%s \n numtele est:%i \n ",Nom,Prenom,age,Sexe,numtele);
	 
	
	return 0;
}
