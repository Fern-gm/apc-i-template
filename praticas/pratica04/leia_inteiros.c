#include<stdio.h>
int main(){
    int numero1;
    int numero2;
    printf("Digite um numero: ");
    scanf("%i", &numero1);
    printf("Digite outro numero: ");
    scanf("%i", &numero2);
    printf("Os numeros digitados foram: %i e %i", numero1, numero2);

    return 0;
}