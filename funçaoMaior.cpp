#include <stdlib.h>
#include <stdio.h>


int maior (int x, int y, int z) {
	if ((x>y)&&(x>z))
	return x;

else if ((y>x)&&(y>z))
	return y;
	
else { if (z==0)
return x;
else 
return z;
}
}
int main () {
	int x, y, z;
	printf ("informe 3 valores para saber qual o maior: ");
	scanf ("%d%d%d", &x,&y,&z);

	printf ("\nO maior numero e: %d", maior(x,y,z));
	
return 0;
}
