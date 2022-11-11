/*
*Arquivo: aritmInt.c
*Data de criação: 03/nov/2022
*Autor: Luiza Arruda Santos 
*Basico 1
*/

#include<stdio.h>

int main(void) {
    int N1;
    int N2;
    printf ("Digite dois numeros:");
    scanf ("%d %d", &N1, &N2);
    printf ("%d + %d = %d\n", N1, N2, N1+N2);
    printf ("%d - %d = %d\n", N1, N2, N1-N2);
    printf ("%d / %d = %d\n", N1, N2, N1/N2);
    printf ("%d * %d = %d\n", N1, N2, N1*N2);
    printf ("%d %% %d = %d\n", N1, N2, N1%N2);

    return 0;
}