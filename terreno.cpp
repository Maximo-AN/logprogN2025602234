#include<stdio.h>
int main(){
	/*Don Jose compr� un terreno y le vendieron el m2 en $9256.00
	�Cu�nto pag� Don Jos� por el terreno considerando el IVA por la transacci�n?
	En la figura propuesta, obtenemos la inc�gnita y calculamos �reas para despu�s
	sumarlas.*/
	const float iva = 0.16, m2 = 9256.00;
	float totalT, totalR;
	int terrenoM;
	printf("Bienvenid@\nEscribe el total de m2 del terreno: ");
	scanf("%d",&terrenoM);
	totalT = m2 * terrenoM;
	totalR = totalT + (totalT * iva);
	printf("El total a pagar es: $%.2f pesos",totalR);
	return 0;
}
