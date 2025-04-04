#include <stdio.h>
int main(){
	int ingrediente, opc;
	printf("Quieres que la pizza sea vegetariana?\nEscribe 1 (si) o 2 (no): ");
	scanf("%d",&opc);
	if(opc != 1 && opc != 2)
		printf("Ingresa una opcion valida");
	else{
		switch(opc){
			case 1:
				printf("Que ingrediente deseas agregar?\n");
				printf("1-Pimiento\n2-Tofu\n\nEscribe el numero del ingrediente: ");
				break;
			case 2:
				printf("Que ingrediente deseas agregar?\n");
				printf("1-Pepperoni\n2-Jamon\n3-Salmon\n\nEscribe el numero del ingrediente: ");
			break;
		}
		
		scanf("%d",&ingrediente);
		if(ingrediente == 1 && opc == 1){
			printf("\nPizza vegetariana\nIngredientes: ");
			printf("Pimiento, Mozzarella y Tomate.");
		}
		
		else if(ingrediente == 2 && opc == 1){
			printf("\nPizza vegetariana\nIngredientes: ");
			printf("Tofu, Mozzarella y Tomate.");
		}
		
		else if(ingrediente == 1 && opc == 2){
			printf("\nPizza NO vegetariana\nIngredientes: ");
			printf("Peppperoni, Mozzarella y Tomate.");
		}
		
		else if(ingrediente == 2 && opc == 2){
			printf("\nPizza NO vegetariana\nIngredientes: ");
			printf("Jamon, Mozzarella y Tomate.");
		}
		
		else if(ingrediente == 3 && opc == 2){
			printf("\nPizza NO vegetariana\nIngredientes: ");
			printf("Salmon, Mozzarella y Tomate.");
		}
		
		else{
			printf("\nIngresaste un dato invalido.\nPor lo que tu pizza ");
			printf("solo tendra Mozzarella y Tomate.");
		}
	}
}
