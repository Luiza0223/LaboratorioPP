/*
*Arquivo: produtorio.c
*Data de criação: 01/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>

float mult_elementos(float * vetor, int n);

int main(void){
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i < n; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    for(int i=0; i < n; i++){
        if(i == n - 1)
            printf("%0.2f ", vetor[i]);
        else
            printf("%0.2f * ", vetor[i]);
    }

    printf("= %0.2f", mult_elementos(vetor, n));

    return 0;
}
float mult_elementos(float * vetor, int n){
    float mult = 1;
    for(int i=0; i < n; i++)
        mult = mult * vetor[i];

    return mult;
}