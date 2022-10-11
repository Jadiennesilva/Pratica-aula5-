#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a,b,c,f1,f2,f3,f4;
	
	printf("Trajetoria do Foguete\n\n");
	
	printf("Digite o valor a: ");
	scanf("%f",&a);
	printf("Digite o valor b: ");
	scanf("%f",&b);
	printf("Digite o valor c: ");
	scanf("%f",&c);
	
	f1=(a*b)/c;
	
	f2=(a*a)+b+(5*c);
	
	f3= (a*b*c) + b + (c/3) * 5 -1;
	
	f4= ((a*b*c)+(a*b*c)+(a*b*c))/2;
	
	printf("\nO resultado da formula 1 foi: %f",f1);
	printf("\nO resultado da formula 2 foi: %f",f2);
	printf("\nO resultado da formula 3 foi: %f",f3);
	printf("\nO resultado da formula 4 foi: %f",f4);
	
	return 0;
}
