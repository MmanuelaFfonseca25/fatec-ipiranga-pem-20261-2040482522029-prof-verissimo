#include <stdio.h>



void processarCarga(float *pesopacote, int tamanho) {
    float soma = 0, media;

    // Calculo da media dos pesos 
    for (int i = 0; i < tamanho; i++) {
        // Usando *(vetor + i) para acessar o valor via ponteiro
        soma += *(pesopacote + i);
    }
    media = soma / tamanho;
    printf("Media calculada: %.2f\n", media);

    //  for para percorrei o array e avaliar e selecionar pesos que passam dos 10%
    for (int i = 0; i < tamanho; i++) {

        float limite = media * 1.10; // Média + 10%

        if (*(pesopacote + i) > limite) {
            // Aplicando correção de -5% diretamente no endereço de memória
            *(pesopacote + i) = *(pesopacote + i) * 0.95;
        }
    }
}

int main() {
   //vetor declaradpo com a quantidade e na função exigida
    float pesofrota[10] = {7.53, 9.0, 22.85, 9.0, 8.0, 6.0, 3.5, 7.6, 6.8, 9.7};
    int n = 10;

    // fazer o printf antes do processamento
    
    for (int i = 0; i < n; i++) {
        printf("Pacote %d: %.2f \n", i + 1, pesofrota[i]);
    }

    // Chama a função passando o ponteiro do vetor
    processarCarga(pesofrota, n);

    // fazer o printf depois do processamento 
    
    for (int i = 0; i < n; i++) {
        printf("Pacote %d: %.2f \n", i + 1, pesofrota[i]);
    }

    return 0;
}