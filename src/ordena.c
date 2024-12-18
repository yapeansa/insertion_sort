#include <stdio.h>
#include <stdlib.h>

// Preenchimento do vetor
void preencher(int *v, int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("Elemento %d: ", j + 1);
        scanf("%d", &v[j]);
    }
}

// Algoritmo de ordenação do vetor insertion sort
void insertion_sort(int *v, int n)
{
    for (int j = 1; j < n; j++)
    {
        int key = v[j];
        int i = j - 1;
        while (i >= 0 && v[i] > v[i + 1])
        {
            v[i + 1] = v[i];
            v[i] = key;
            i--;
        }
    }
}

// Imprime os elementos do vetor
void imprime(int *v, int n)
{
    for (int j = 0; j < n; j++)
        printf("%d ", v[j]);

    printf("\n");
}
