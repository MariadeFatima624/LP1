/*
Arquivo: aritmInt.c
Data de criação: 03 de outubro de 2022
Autora: Maria de Fátima
*Lista de exercícios - Básico 1
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

    printf("O resultados das operacoes aritmeticas com %d e %d sao: \n soma = %d \n subtracao = %d \n multiplicacao = %d \n divisao = %d \n modulo = %d \n ", 
    primeiroInt, segundoInt, soma, subtracao, multiplicacao, divisao, modulo);

    return 0;
}