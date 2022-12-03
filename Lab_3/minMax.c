/*
*Arquivo: minMax.c
*Data de criação: 01/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>

float max(float * vetor, int n);
float min(float * vetor, int n);

int main(void){

    int n;
    float mymin, mymax;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i < n; i++){
        printf("Informe o elemento %d: ", i + 1);
        scanf("%f", vetor + i);
    }    
    mymin = min(vetor, n);
    mymax = max(vetor, n);

    for(int i=0; i<n; i++){
        if(vetor[i] == mymin)
            printf("%g< ", vetor[i]);
        else if(vetor[i] == mymax)
            printf("%g> ", vetor[i]);
        else
            printf("%g ", vetor[i]);
    }
    return 0;

}
float min(float * vetor, int n){
    float min = vetor[0];
    for(int i = 1; i < n; i++)
        if(vetor[i] < min)
            min = vetor[i];
    return min;
}
float max(float * vetor, int n){
    float max = vetor[0];
    for(int i = 1; i < n; i++)
        if(vetor[i] > max)
            max = vetor[i];
    return max;
}