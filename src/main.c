#include <stdio.h>
#include <stdlib.h>
#include "ordena.h"

int main()
{
    int n, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vet = (int *)malloc(n * sizeof(int)); // Alocando o vetor dinamicamente
    preencher(vet, n);                    // Função para preencher o vetor

    printf("SELECTION SORT\n");
    printf("Vetor original (não ordenado):\n");
    imprime(vet, n); // Imprime os elementos do vetor antes da ordenação

    insertion_sort(vet, n); // Função para ordenar os elementos do vetor
    printf("Vetor ordenado:\n");
    imprime(vet, n); // Imprime o vetor com seus elementos ordenados

    return 0;
}
