#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float base,altura,area;
	
	printf("Calculadora da Área do triângulo\n\n");
	
	printf("Digite a altura: ");
	scanf("%f",&altura);
	printf("Digite a base: ");
	scanf("%f",&base);
	
	area=(base*altura)/2;
	
	printf("\nA área do triângulo é: %.2f",area);

	return 0;
}
