#include<stdio.h>
int main(){
    char  tecla;
    //leitura
    printf("Digita UMA LETRA e depois enter:\n");
    scanf("%c", &tecla);
    printf("A letra teclada e:%c\n", tecla);
    
    int numero_1;
    int numero_2;
    printf("Digite um numero:\n");
    scanf("%i", &numero_1);
    printf("Digite outro numero:\n");
    scanf("%i", &numero_2);
    int soma = numero_1 + numero_2;
    printf("o resultado da sua conta e : %i ", soma);

    return 0;
}