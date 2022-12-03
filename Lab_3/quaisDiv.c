/*
*Arquivo: quaisDiv.c
*Data de criação: 01/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>

void divisores(int * vetor, int tamanho, int referencial); 

int main(void){
    int n, R;
    printf("Digite quantos elementos: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Escolha um numero de referencia: ");
    scanf("%d", &R);
    divisores(vetor, n, R);

    return 0;
}
void divisores(int * vetor, int tamanho, int referencial){
    for(int i = 0; i < tamanho; i++){
        if(referencial % vetor[i] == 0)
            printf("%d# ", vetor[i]);
        else
            printf("%d ", vetor[i]);

    }
}
