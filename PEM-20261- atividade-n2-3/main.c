

#include <stdio.h>
#include "interface.h"
#include "recursao.h"


//fluxo principal
int main() {
    int opcao, n, b, e;

    do {
        opcao = mostrarMenu(); // interliga as opçoes de contas com o menu de possiveis contas na calculadora cientifica 

        if (opcao == 1) {
            n = pedirDecimal(); 
            decToBin(n);       // se a opçao for seleciobada o numero escolhido pela função especifica sera selecioando e a função resposnavel pela conversao 
                               // binaria é exibirá o resutado da conversão
        } 
        else if (opcao == 2) {
            b = pedirBase();   
            e = pedirExpoente();// se a opçao 2 for escolhida a base sera dada pelo usuario e a conta sera feita exibindo se reusultado (chamando sua função)
                                //
            printf("Resultado: %d\n", potencia(b, e));
        }
        else if (opcao == 3) {
            n = pedirDecimal();// se a opçao 3 for escolhida o numero sera dada pelo usuario e a conta sera feita exibindo se reusultado (chamando sua função)
            printf("Soma dos digitos: %d\n", somaDigitos(n));
        }

    } while (opcao != 0);

    return 0;
}