#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int somma, voto, numero_valore;
	float voto_medio;
	
	
	for ( numero_valore = 0 ; numero_valore < 10; numero_valore++ ) {
		printf("\nInserisci il voto numero %d: ", numero_valore+1);
		scanf("%d", &voto);
		somma += voto;
	}
	voto_medio = somma/10.0;
	
	printf("\nLa media dei voti è: %f\n", voto_medio);
	
	system("pause");
	
	return 0;
}
