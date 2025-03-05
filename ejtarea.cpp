#include <stdio.h>
int main(){
	int x = 2, y = 4;
	float z = ((float)1/x) + ((float)(x+y)/3) + 2*((float)x/y);
	printf("El resultado es: %.1f", z);
	return 0;
}
