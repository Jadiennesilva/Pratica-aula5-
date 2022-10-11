#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    float v1,v2,v3,media;
    
    printf("Média\n\n");
    
    printf("Digite o valor 1: ");
    scanf("%f",&v1);
    printf("Digite o valor 2: ");
    scanf("%f",&v2);
    printf("Digite o valor 3: ");
    scanf("%f",&v3);
    
    media = (v1+v2+v3)/3;
    
    printf("\nMédia: %f",media);
    
    return 0;
}

