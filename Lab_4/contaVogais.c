/*
*Arquivo: contaVogais.c
*Data de criação: 08/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#define N 1024

void conta(char * str, long long int nchar);
void getstr(char * str, long long int nchar);

int main(void){
    char msg[N] = {'x', 'x', 'x', 'x', 'x'};
    printf("Digite uma palavra: ");
    getstr(msg, N);
    conta(msg, N);

    return 0;
}

void getstr(char * str, long long int nchar){
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar)
        while ((c = getchar()) != '\n' && c != EOF);
}

void conta(char * str, long long int nchar){
    int v = 0;
    for(long long int j = 0; j < nchar; j++){
        if(str[j] == 'A' || str[j] == 'a' 
        || str[j] == 'E' || str[j] == 'e' 
        || str[j] == 'I' || str[j] == 'i' 
        || str[j] == 'O' || str[j] == 'o' 
        || str[j] == 'U' || str[j] == 'u')
        v++;
    }
    printf("O total de vogais e: %d", v);
}