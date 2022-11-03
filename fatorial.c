/*
Arquivo: aritmInt.c
Data de criação: 03 de outubro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 3
*/
#include<stdio.h>

int main(void){
    int numero;
    int fatorial = 1;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &numero);
    
    if(numero >1){
        for(int i=1; i<= numero; i++){
            fatorial = fatorial * i;
        }
        printf("%d! = %d", numero, fatorial);
    }
    return 0;
}