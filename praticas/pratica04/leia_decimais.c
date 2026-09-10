#include<stdio.h>
int main(){
    float nota1;
    float nota2;
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Sua primeira nota e: %.2f e sua segunda nota e: %.2f", nota1, nota2);
    
    return 0;
}