#include<stdio.h>
int main(){

    float nota;
    printf("Informe uma nota:");
    scanf("%f", &nota);
    if(nota >=5){
        printf("voce foi aprovado");
    }else{
        printf("voce nao foi aprovado :(");
    }
    return 0;
}
