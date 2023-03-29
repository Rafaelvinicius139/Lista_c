#include<stdio.h>



int main(){
	
	
	float numero, porcentagem, resultado;
	
	printf("\ndigite um numero");
	scanf("%f", &numero);
	
	printf("\n digite a porcentagem");
	scanf("%f", &porcentagem);
	
	
	
	resultado = (numero * porcentagem)  / 100;
	
	
	
	printf("\n numero  %.2f", numero );
	
	printf("\n pocentagem %.1f", porcentagem);
	
	printf("\n  resultado %.2f", resultado);
	
	
	
	
	
	
}