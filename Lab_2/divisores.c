/*
*Arquivo: divisores.c
*Data de criação: 24/nov/2022
*Autor: Luiza Arruda Santos 
*Programa professor
*/

#include <stdio.h>

int main(void){
    int N;
    int i;
    printf("Digite um numero inteiro:");
    scanf("%d", &N);
    for(i= 1; i <= N; i++)
        if(N % i == 0)
          printf("%d ", i); 

    return 0;
}