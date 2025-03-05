#include <stdio.h>
#include <math.h>
int main(){
	int l = 7;
	/*Sumamos los lados equivalentes y los multiplicamos por l,
	por consiguiente, sumamos el resultado de la media circunferencia*/
	float pt = ((float)23/5*l) + (3.1416*l) / 2;
	/*Obtenemos áreas individuales por cada tipo de figura geométrica presente
	y seguidamente sumamos (tomar en cuenta el producto por cada figura geométrica)*/
	float c1 = pow(l,2), c2 = (float)1/5*l*((float)3/5*l);
	float c3 = (float)1/5*l*((float)1/5*l);
	float at = c1 + (2*c2) + (2*c3) + (3.1416*(pow((float)l/2,2)) / 2);
	printf("Perimetro: %.4f\nArea: %.4f\n",pt,at);
	return 0;
}
