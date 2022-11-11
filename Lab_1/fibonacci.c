/*
*Arquivo: fibonacci.c
*Data de criação: 11/nov/2022
*Autor: Luiza Arruda Santos 
*Medio 2
*/

#include <stdio.h>

int main(void){
    int N, a;
    int b = 0;
    int c = 1;
    int i = 0;
	printf("Digite o numero de termos desejados:");
	scanf("%d", &N);
	while(i < N){
	    printf("%d, ", b);
	    a = b + c;
	    c = b;
	    b = a;
	    i++;
        if(i == N)
            printf("...");
    }
    return 0;
}