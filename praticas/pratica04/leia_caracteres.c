#include<stdio.h>
int main(){
    char letra;
    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    printf("A letra escolhida foi: %c seu valor na tabela ascii e: %d", letra, letra);

    return 0;

}