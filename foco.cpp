#include<stdio.h>
#include<math.h>
int main(){
	/*Ejercicio propuesto, poligono irregular. Combinación de 
	triángulos, rectangulos y una media circunferencia*/
	int l = 7;
	/*Formula para el perimetro: Pi x (3xL) / 2 + 2 x (sqrt((L^2)+(3xL)^2) + 7xL)*/
	float pt = M_PI*(3*l) /2 + 2*(sqrt(pow(l,2)+pow(l*3,2))) + 7*l;
	/*Formula para el area: 2x3xLxL + (2x3xLxL)/2 + Pi x (3xL/2)^2 / 2*/
	float at = 2*3*l*l + (2*3*l*l)/2.0 + M_PI * pow(3*l/2.0,2)/2.0;
	printf("Area: %.4f\nPerimetro: %.4f",at,pt);
}
