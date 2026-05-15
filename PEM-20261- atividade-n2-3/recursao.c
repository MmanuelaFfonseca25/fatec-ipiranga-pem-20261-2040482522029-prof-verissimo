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
// A aritimetica das funções da calculadora 

//as diretivas 
#include <stdio.h>
#include "recursao.h" 

// aritimeticas da calculadora 

int somaDigitos(int n) {
    if (n == 0) { // se ele for igual a 0 retorna 0
        return 0;
    }
    
    return (n % 10) + somaDigitos(n / 10);// ele dividi para ele ser lido sigularmente cada algarismo para que as exigencias sejam atendidas.
}

int potencia(int base, int exp) {
    if (exp == 0) {// caso o expoente seja igual a 1 , ele retorna 1 
        return 1;
    }
    return base * potencia(base, exp - 1); // calcular a base com sua potencia
}

void decToBin(int n) {
    if (n > 0) {
        decToBin(n / 2); // Primeiro mergulha na recursão
        printf("%d", n % 2); // Depois imprime (pilha)
    }
}
