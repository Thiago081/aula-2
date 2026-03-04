#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	//exercicio 2
	float num1, num2, num3;
	
	
	//exercicio 3
	printf ("digite uma metragem: ");
	scanf ("%f", &num1);
	fflush (stdin);
	
	num2 = (num1 *100);
	printf("%0.fm --> %0.fcm", num1, num2);
	
	//exercicio 4
	printf("\nexercicio 4\n");
	printf("ano de nascimento: ");
	scanf ("%f", &num1);
	fflush (stdin);
	num2 = (2026 - num1);
	num3 = (num2 *365);
	printf("%.0f anos --> %.0f dias",num2, num3 );
	return 0;
}