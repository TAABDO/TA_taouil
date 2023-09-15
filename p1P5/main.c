#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	  double x1, y1, x2, y2,distance;

    
    printf("Saisissez la premier point (M) sous la forme (x1, y1) : ");
    scanf("%lf, %lf", &x1, &y1);
 
    printf("Saisissez les coordonnées du deuxième point (N) sous la forme (x2, y2) : ");
    scanf("%lf, %lf", &x2, &y2);
     distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("La distance entre les points M et N est : %lf\n", distance);
    
	return 0;
}
