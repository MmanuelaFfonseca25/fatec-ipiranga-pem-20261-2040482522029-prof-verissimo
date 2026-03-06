#include <stdio.h>
#include <string.h>

int main() {

    int idProduto[10];
    char nomeProduto[10][50];

    int total = 0;
    int i;
    int idBusca;
    int indice;

   
    for(i = 0; i < 3; i++) {

        idProduto[i] = i + 1; 

        printf("Digite o nome do produto: ");
        fgets(nomeProduto[i],50,stdin);

        total++;
    }

    printf("\nProdutos cadastrados:\n");

    for(i = 0; i < total; i++) {

        printf("ID: %d\n", idProduto[i]);
        printf("Nome: %s\n", nomeProduto[i]);
        printf("\n");

    }

   

    printf("Digite o ID do produto que deseja consultar: ");
    scanf("%d", &idBusca);

    indice = idBusca - 1; // converte ID para índice do array

    if(indice >= 0 && indice < total) {

        printf("\nProduto encontrado!\n");
        printf("Posicao no array: %d\n", indice);
        printf("ID: %d\n", idProduto[indice]);
        printf("Nome: %s\n", nomeProduto[indice]);

    } else {

        printf("\nProduto nao encontrado.\n");

    }

   

    printf("\nDigite o ID do produto que deseja excluir: ");
    scanf("%d", &idBusca);

    indice = -1;


    for(i = 0; i < total; i++) {

        if(idProduto[i] == idBusca) {
            indice = i;
        }

    }

    if(indice != -1) {

        
        for(i = indice; i < total - 1; i++) {

            idProduto[i] = idProduto[i+1];
            strcpy(nomeProduto[i], nomeProduto[i+1]);

        }

        total--;

        printf("Produto removido com sucesso!\n");

    } else {

        printf("Produto nao encontrado para exclusao.\n");

    }

   
    printf("\nLista de IDs cadastrados:\n");

    for(i = 0; i < total; i++) {

        printf("%d\n", idProduto[i]);

    }

    return 0;
}