#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float massa,altura,imc;
	
	printf("Calcule o seu imc\n\n");
	
	printf("Digite a sua massa: ");
	scanf("%f",&massa);
	printf("Digite a sua altura: ");
	scanf("%f",&altura);
	
	imc = massa / (altura*altura);
	
	printf("\nO seu IMC é: %.2f",imc);
		
	return 0;
	}
	
