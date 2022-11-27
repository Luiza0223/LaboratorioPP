/*
*Arquivo: impares.c
*Data de criação: 24/nov/2022
*Autor: Luiza Arruda Santos 
*Programa professor
*/

#include <stdio.h>

int main(void){
    int A, B;
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &A);
    printf("Digite o final do intervalo: ");
    scanf("%d", &B);
    for(int i = A; i <= B; i++)
        if(i%2 != 0)
            printf("%d ", i);
            
    return 0; 
}