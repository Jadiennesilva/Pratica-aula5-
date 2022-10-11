#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int min,seg;
	
    printf("Converta minutos em segundos\n\n");
    
    printf("Digite a quantidade de minutos que deseja ser convertida: ");
    scanf("%d",&min);
    
    seg = min * 60;
    
    printf("\nA quantidade de %d minutos em segundos é: %d segundos",min,seg);
    
	return 0;
}
