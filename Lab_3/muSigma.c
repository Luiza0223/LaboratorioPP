/*
*Arquivo: muSigma.c
*Data de criação: 01/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <math.h>

float media_valores(float * vetor, int n);
float desvio_padrao(float * vetor, int n);

int main(void){
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i < n; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    printf("A media e %0.2f, ", media_valores(vetor, n));
    printf("o desvio e %0.2f", desvio_padrao(vetor, n));
    
}
float media_valores(float * vetor, int n){
    float soma = 0;
    float media;
    for(int i=0; i < n; i++)
        soma = soma + vetor[i];
    media = soma / n;

    return media;
}
float desvio_padrao(float * vetor, int n){
    float soma = 0;
    float media = media_valores(vetor, n);
    float desvio;
    for(int i=0; i < n; i++)
        soma = soma + pow((vetor[i] - media), 2);
    desvio = sqrt(soma / n);

    return desvio;
}