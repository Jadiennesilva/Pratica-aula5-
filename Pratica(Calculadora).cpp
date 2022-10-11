#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n1,n2,soma,subtracao,divisao,multiplicacao;
	
	printf("Calculadora\n\n");
	
	printf("Digite um numero real: ");
	scanf("%f",&n1);
	printf("Digite outro numero real: ");
	scanf("%f",&n2);
	
	soma = n1+n2;
	subtracao= n1-n2;
	multiplicacao=n1*n2;
	divisao= n1/n2;
	
	printf("\nO resultado da multiplicação foi: %.2f",multiplicacao);
	printf("\nO resultado da divisão foi: %.2f",divisao);
	printf("\nO resultado da soma foi: %.2f",soma);
	printf("\nO resultado da subtração foi: %.2f",subtracao);

	return 0;
}
