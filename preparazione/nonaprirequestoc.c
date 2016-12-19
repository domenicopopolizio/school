#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	int base1, altezza1;
	int base2, altezza2;

	float area1, area2;

	printf("Inserisci il valore della altezza e della base del primo triangolo: ");
	scanf("%d%d",   &altezza1, &base1 );

	printf("\nInserisci il valore della altezza2 e della base2 del secondo triangolo: ");
	scanf("%d%d",   &altezza2, &base2 );

	area1 = (base1*altezza1)/2.0;

	area2 = (base2*altezza2)/2.0;


	if ( area1 > area2 ) 
	{
		printf("\nE' maggiore l'area 1");
	}


	else if ( area2 > area1 ) 
	{
		printf("\nE' maggiore l'area 2");
	}

	else 
	{
		printf("\nSono uguali");
	}


	printf("\nL'area1 = %.2f e L'area2 = %.3f", area1, area2);

	system("pause");

	return 0;
}