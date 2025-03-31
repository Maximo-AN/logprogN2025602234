#include <stdio.h>
#include <math.h>
int main(){
	/*Ejercicio propuesto, polígono irregular. Empleamos teorema de pitágoras
	para la obtención de los lados faltantes y así calcular el perímetro completo.*/
	int l = 2;
	/*Formula para el area total: L^2 + ((3/2 x L)xL / 2) + (2 x (LxL / 2)) + (L^2) x (1/4 x L) */
	float at = pow(l,2) + (((float)3/2 * l) * l)/2 + (2 * (pow(l,2) / 2)) + ((2*l) * ((float)1/4 * l));
	/*Formula para el perimetro total: (1/4xL) + (1/4xL) + (L^2) + (3/2xL) + (sqrt(8)x2) + sqrt(13) + 2 */
	float pt = (2*l) + (2*((float)1/4 * l)) + ((float)3/2 * l) + (sqrt(8)*2) + sqrt(13) + 2;
	printf("Area: %.2f\nPerimetro: %.2f",at,pt);
	return 0;
}
