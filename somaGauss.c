/*
Arquivo: somaGauss.c
Data de criação: 03 de outubro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 2
*/

#include<stdio.h>

int main(void){
    int numero;
    int r = 0;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &numero);
    
    if(numero >1){
        for(int i=1; i<= numero; i++){
            r = r + i;
        }
        printf("Resultado da soma de Gauss para %d: %d", numero, r);
    }
    return 0;
}