#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int dinheiro,troco;
	
	printf("Maquina de Café\n\n");
	
	printf("Valor inserido pelo cliente: ");
	scanf("%d",&dinheiro);

	troco= dinheiro %  7;
	
	printf("\nO cliente perdeu: %d reais",troco);
	
	return 0;
	}
