#include <stdio.h>
#include <stdlib.h>
#include "ordena.h"

int main()
{
    int n, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    // Alocando o vetor dinamicamente
    vet = (int *)malloc(n * sizeof(int));
    // Preenchimento do vetor
    preencher(vet, n);

    printf("SELECTION SORT\n");
    printf("Vetor original (não ordenado):\n");
    // Imprime os elementos do vetor antes da ordenação
    imprime(vet, n);
    // Ordenação do vetor
    insertion_sort(vet, n);
    printf("Vetor ordenado:\n");
    // Imprime os elementos do vetor após o processo de ordenação
    imprime(vet, n);

    return 0;
}
