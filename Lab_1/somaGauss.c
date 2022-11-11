/*
*Arquivo: somaGauss.c
*Data de criação: 10/nov/2022
*Autor: Luiza Arruda Santos 
*Basico 2
*/

#include <stdio.h>

int main(void){
    int N;
    int i;
    int f = 0;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &N);
    for(i= 0; i < N; i++)
        f = f + (N-i);
    
    printf("A soma de Gauss e: %d", f);

    return 0;
}