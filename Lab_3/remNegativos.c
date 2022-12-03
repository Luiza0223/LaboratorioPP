/*
*Arquivo: remNegativos.c
*Data de criação: 01/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>

int tamanho(float * vetor, int n);
void retira(float * vetor, int n);

int main(void){
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i=0; i < n; i++){
        printf("Informe o elemento inteiro %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    if (tamanho(vetor, n) == 0)
        printf("vazio");
    else 
        retira(vetor, n);
    return 0;
}
int tamanho(float * vetor, int n){
    int tam = 0;
    for(int i=0; i < n; i++)
        if(vetor[i] >= 0)
            tam = tam + 1;
    return tam;            
}
void retira(float * vetor, int n){
    int tam = tamanho(vetor, n);
    printf("Os numeros positivos sao: ");
    for(int i=0; i < n; i++){
        if(vetor[i] >= 0)
            printf("%.0f ", vetor[i]);
    }
}

