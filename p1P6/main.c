#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	 double rayon, circ;
    const double pi = 3.14159265359;
	
	printf("Enter le rayon :",rayon);
	scanf("%lf",&rayon);
	
	circ = 2*pi*rayon;
	
	printf("le circonférence est:%lf\n",circ);
	
	
	
	
	return 0;
}
