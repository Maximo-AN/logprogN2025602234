#include <stdio.h>
#include <math.h>
int main(){
	float peso, estatura, imc;
	printf("Escribe tu peso en kilogramos (kg): ");
	scanf("%f",&peso);
	printf("Escribe tu estatura en metros (m): ");
	scanf("%f",&estatura);
	
	if(peso <= 0 || estatura <= 0)
		printf("Otorga datos validos");
		
	else{
		imc = peso / pow(estatura,2);		
		if(imc <= 18.4)
			printf("Bajo peso");
			
		else if(imc >= 18.5 && imc <= 24.9)
			printf("Normal");
			
		else if(imc >= 25.0 && imc <= 29.9)
			printf("Sobrepeso");
			
		else if(imc >= 30.0 && imc <= 34.9)
			printf("Obesidad clase 1");
			
		else if(imc >= 35.0 && imc <= 39.9)
			printf("Obesidad clase 2");
			
		else
			printf("Obesidad clase 3");				
	}	
	
	return 0;
}
