/*
*Arquivo: somaDivisores.c
*Data de criação: 11/nov/2022
*Autor: Luiza Arruda Santos 
*Medio 1
*/

#include <stdio.h>

int main(void){
    int N;
    int i;
    int soma = 0;
    printf("Digite um numero inteiro:");
    scanf("%d", &N);
    for(i= 1; i <= N; i++)
        if(N % i == 0)
          soma = soma + i; 

    printf("Soma dos divisores e: %d", soma);
    
    return 0;
}