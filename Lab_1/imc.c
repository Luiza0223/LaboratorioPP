/*
*Arquivo: imc.c
*Data de criação: 10/nov/2022
*Autor: Luiza Arruda Santos 
*Basico 4
*/

#include <stdio.h>

int main(void){
    float peso;
    float altura;
    float imc;
    printf("Digite seu peso em kg:");
    scanf("%f", &peso);
    printf("Digite sua altura em m:");
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    if(imc < 16)
        printf("IMC= %0.2f, perigo de vida", imc);
    if(imc >= 16 && imc < 17 )
        printf("IMC= %0.2f, muito abaixo do peso", imc);
    if(imc >= 17 && imc < 18.5)
        printf("IMC= %0.2f, abixo do peso", imc);
    if(imc >= 18.5 && imc < 25)
        printf("IMC= %0.2f, peso normal", imc);
    if(imc >= 25 && imc < 30)
        printf("IMC= %0.2f, acima do peso", imc);
    if(imc >= 30 && imc < 35)
        printf("IMC= %0.2f, obsidade grau I", imc);
    if(imc >= 35 && imc < 40)
        printf("IMC= %0.2f, obesidade grau II", imc);
    if(imc >= 40)
        printf("IMC= %0.2f, obessidade grau III", imc);

    return 0;
}