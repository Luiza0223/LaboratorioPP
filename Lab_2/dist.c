/*
*Arquivo: dist.c
*Data de criação: 24/nov/2022
*Autor: Luiza Arruda Santos 
*Programa professor
*/

#include <stdio.h>
#include <math.h>

float Distancia(float xA, float yA, float xB, float yB);

int main(void){
    float xA, yA, xB, yB;
    printf("Digite as coordenadas do ponto A:");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas do ponto B:");
    scanf("%f %f", &xB, &yB);
    printf("%0.2f", Distancia(xA, yA, xB, yB));

    return 0;
}
float Distancia(float xA, float yA, float xB, float yB){
    float De = 0;
    De = sqrt((xA - xB)*(xA - xB) + (yA - yB)*(yA - yB));
    return De;
}