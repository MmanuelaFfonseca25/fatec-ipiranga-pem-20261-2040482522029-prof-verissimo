/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa: Aplicar a criação de bibliotecas *
* e a aplicação de Recursividade                          *
* para a resolução de problemas matemático                *
* Data - 15/05/2026                                      * 
* Autor: Manuela Ramos Fonseca                           *
*--------------------------------------------------------*/
// Aqui fica as funçoes de menu da calculadora

//diretivas
#include <stdio.h>
#include "interface.h"

//Menu inicial para escolher qual sera o calculo escolhido
int mostrarMenu() {
    int op;
    printf("\n1 - Binario\n2 - Potencia\n3 - Soma\n0 - Sair\nEscolha: ");//imprime os numeros correspondenes com as escolhas
    scanf("%d", &op);//recebe o numero correspondente com a escolha
    return op; //retorna a opçao escolhida
}

//funcao que capta e retorna o decimal escolhdo pelo usuario
int pedirDecimal() {
    int n;//variavel tipo inteiro 
    printf("Digite o numero decimal: ");//imprime a pergunta
    scanf("%d", &n);//recebe e guarda o numero escolhido 
    return n;//retorna o numero escolhido 
}

//funcao que capta e retorna o decimal escolhdo pelo usuario
int pedirBase() {
    int b;//variavel do tipo inteiro
    printf("Digite a base: ");//imprime a pergunta
    scanf("%d", &b);//recebe e guarda o numero escolhido 
    return b;//retorna o numero escolhido 
}

//funcao que capta e retorna o decimal escolhdo pelo usuario
int pedirExpoente() {
    int e;
    printf("Digite o expoente: ");//imprime a pergunta
    scanf("%d", &e);//recebe e guarda o numero escolhido
    return e;//retorna o numero escolhido 
}