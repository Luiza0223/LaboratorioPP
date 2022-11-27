/*
*Arquivo: areaTriRet.c
*Data de criação: 24/nov/2022
*Autor: Luiza Arruda Santos 
*Programa professor
*/

#include <stdio.h>
#include <math.h>

float distancia(float X1, float Y1, float X2, float Y2);
int main(void){
    float xA, yA, xB, yB;
    printf("Digite as coordenadas do vertice A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas do vertice B: ");
    scanf("%f %f", &xB, &yB);
    float xC = xB;
    float yC = yA;
    float base = distancia(xA, yA, xC, yC);
    float altura = distancia(xB, yB, xC, yC);
    printf("A area do triangulo e: %0.2f", (base*altura)/2);

    return 0;
}

float distancia(float X1, float Y1, float X2, float Y2){
    float De = 0;
    De = sqrt((X1 - X2)*(X1 - X2) + (Y1 - Y2)*(Y1 - Y2));
    return De;
}