#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float base,altura,area;
	
	printf("Calculadora da �rea do tri�ngulo\n\n");
	
	printf("Digite a altura: ");
	scanf("%f",&altura);
	printf("Digite a base: ");
	scanf("%f",&base);
	
	area=(base*altura)/2;
	
	printf("\nA �rea do tri�ngulo �: %.2f",area);

	return 0;
}
