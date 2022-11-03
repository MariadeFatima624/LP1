/*
Arquivo: aritmInt.c
Data de criação: 03 de outubro de 2022
Autora: Maria de Fátima
Lista de exercícios - Básico 1
*/

#include <stdio.h>

int main(void){
    int primeiroInt;
    int segundoInt;

    printf("Escolha dois numeros: ");
    scanf("%d %d", &primeiroInt, &segundoInt);

    int soma = primeiroInt + segundoInt;
    int subtracao = primeiroInt - segundoInt;
    int multiplicacao = primeiroInt * segundoInt;
    int divisao = primeiroInt / segundoInt;
    int modulo = primeiroInt % segundoInt;

    printf("O resultados aritmeticas com %d e %d sao:\n ", primeiroInt, segundoInt);
    printf("%d + %d = %d \n", primeiroInt, segundoInt, soma);
    printf("%d + %d = %d \n", primeiroInt, segundoInt, subtracao);
    printf("%d + %d = %d \n", primeiroInt, segundoInt, multiplicacao);
    printf("%d + %d = %d \n", primeiroInt, segundoInt, divisao);
    printf("%d + %d = %d \n", primeiroInt, segundoInt, modulo);



    return 0;
}