#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

float media (float x, float y, float z) {
	return ((x+y+z)/3);
}

main () {

	printf ("Calculando media");
	printf("... %2.1f", media (20,25,45));
	
	printf("\n");
	system ("\pause");
return 0;
}
	
