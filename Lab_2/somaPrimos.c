/*
*Arquivo: somaPrimos.c
*Data de criação: 24/nov/2022
*Autor: Luiza Arruda Santos 
*Programa professor
*/

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main(void){
    int i, N, M;
    int soma = 0;
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &N);
    printf("Digite o final do intervalo: ");
    scanf("%d", &M);
    for (i = N; i <= M; i++)
        if(ehPrimo(i))
            soma = soma + i;
    
    printf("A soma dos primos dentro do intervalo e: %d", soma);

    return 0;
}
bool ehPrimo(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }
    return true;

}