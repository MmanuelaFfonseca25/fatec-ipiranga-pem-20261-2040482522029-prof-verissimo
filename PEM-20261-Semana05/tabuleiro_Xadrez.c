/******************************************************************************

--Manuela Ramos Fonseca
*
--Fatec Ipiranga-Pastor Éneas Tognini-ADS Vespertino
*
--Atividade-PEM-Semana05-DIA:14/02/2026
*
Esse código desenvolido em linguagem C afim de simular uma jogada popular de xadrez:Xeque-Pastor.



*****************************************************************************/


#include <stdio.h>
#include <string.h>

#define tamanho 8

// FUNÇÃO MOVER: Copia a peça para o destino e limpa a origem com "..."
void mover(char tab[8][8][5], int lOrigem, int cOrigem, int lDestino, int cDestino) {
    strcpy(tab[lDestino][cDestino], tab[lOrigem][cOrigem]);
    strcpy(tab[lOrigem][cOrigem], "...");
}

// FUNÇÃO IMPRIMIR: Desenha o tabuleiro com os números (8-1) e letras (a-h)
void imprimirTabuleiro(char tab[8][8][5]) {
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d  ", 8 - i); // Numeração lateral
        for (int j = 0; j < tamanho; j++) {
            printf(" %s ", tab[i][j]); 
        }
        printf("\n");
    }
    printf("     a   b   c   d   e   f   g   h\n\n");
}

int main() {
    char tabuleiro[tamanho][tamanho][5];

    // 1. LIMPEZA (Encher tudo com "...")
    for(int i = 0; i < tamanho; i++) {
        for(int j = 0; j < tamanho; j++) {
            strcpy(tabuleiro[i][j], "...");
        }
    }

    // 2. POSIÇÃO INICIAL DOS PEÕES (PP1-PP8 e PB1-PB8)
    for(int j = 0; j < tamanho; j++) {
        sprintf(tabuleiro[1][j], "PP%d", j + 1); // Linha 1 (Pretas)
        sprintf(tabuleiro[6][j], "PB%d", j + 1); // Linha 6 (Brancas)
    }

    // 3. POSIÇÃO INICIAL DAS PEÇAS NOBRES
    // Pretas (Linha 0)
    strcpy(tabuleiro[0][0], "tP1"); strcpy(tabuleiro[0][1], "cP2");
    strcpy(tabuleiro[0][2], "bP3"); strcpy(tabuleiro[0][3], "dP4");
    strcpy(tabuleiro[0][4], "rP5"); strcpy(tabuleiro[0][5], "bP6");
    strcpy(tabuleiro[0][6], "cP7"); strcpy(tabuleiro[0][7], "tP8");

    // Brancas (Linha 7)
    strcpy(tabuleiro[7][0], "TB1"); strcpy(tabuleiro[7][1], "CB2");
    strcpy(tabuleiro[7][2], "BB3"); strcpy(tabuleiro[7][3], "DB4");
    strcpy(tabuleiro[7][4], "RB5"); strcpy(tabuleiro[7][5], "BB6");
    strcpy(tabuleiro[7][6], "CB7"); strcpy(tabuleiro[7][7], "TB8");

    // --- SIMULAÇÃO DAS JOGADAS ---
    
    printf("=========================================\n");
    imprimirTabuleiro(tabuleiro);

     printf("=========================================\n");
    printf("      Joagada #1        \n");
    printf("=========================================\n");
    printf("---------- Brancas jogam e4 ----------\n");
    mover(tabuleiro, 6, 4, 4, 4); 
    imprimirTabuleiro(tabuleiro);// Brancas jogam Peão do Rei (e1)

    printf("---------- Pretas jogam e5 ----------\n");
    mover(tabuleiro, 1, 4, 3, 4); 
    imprimirTabuleiro(tabuleiro);//Pretas jogam Peão do Rei (e5)

    printf("=========================================\n");
    printf("      Joagada #2        \n");
    printf("=========================================\n");
    printf("---------- Brancas jogam Bc4 ----------\n");
    mover(tabuleiro, 7, 5, 4, 2); 
    imprimirTabuleiro(tabuleiro);//Brancas jogam Bispo do rei (Bc4)

    printf("---------- Pretas jogam Cc6 ----------\n");
    mover(tabuleiro, 0, 1, 2, 2); // Pretas jogam Cavalo da Dama (Cc6)
    imprimirTabuleiro(tabuleiro);

    printf("=========================================\n");
    printf("      Joagada #3        \n");
    printf("=========================================\n");
    printf("---------- Brancas jogam Dh5 ----------\n");
    mover(tabuleiro, 7, 3, 3, 7); // Brancas jogam Dama (Dh5)
    imprimirTabuleiro(tabuleiro);

    printf("---------- Pretas jogam Cf6 ----------\n");
    mover(tabuleiro, 0, 6, 2, 5); // Pretas jogam Cavalo do Rei (Cf6) 
    imprimirTabuleiro(tabuleiro);

    printf("=========================================\n");
    printf("      Joagada #4 (Xeque-Mate)       \n");
    printf("=========================================\n");
    printf("---------- Brancas capturam f7: XEQUE MATE! (Dxf7#) -------\n");
    mover(tabuleiro, 3, 7, 1, 5); // Brancas capturam Peão do Rei e dão Xeque Mate: Dxf7
    imprimirTabuleiro(tabuleiro);

    return 0;
}