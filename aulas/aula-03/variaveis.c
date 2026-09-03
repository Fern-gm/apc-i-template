#include<stdio.h>
int main(){
    /*
    char - um caracter
    int - um inteiro -, 0 ou +
    float - um decimal com 6 casas
    double - um decimal com 12 casas
    void - sem tipo
    */

    
    char letra;
    int numero_inteiro;
    float media_final;
    double exponencial;
    // atribuir valor a uma variavel
    letra = 'A';
    numero_inteiro = 10;
    media_final = 9.5f;
    exponencial = 9.123456573962348;
    
    printf("o valor de letra = %c\n", letra);
    printf("o valor de numero_inteiro = %i\n", numero_inteiro);
    printf("o valor de media final = %.1f\n", media_final);
    printf("o valor de exponencial = %.15f\n", exponencial);
    

    char nome[] = "Pedro";
    printf("%s\n\n", nome);

    int idade = 22;
    if(idade <= 17){
        printf("menor de idade");
    }else {
        printf("maior de idade");
    }

    

    return 0;
} 