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
        // inserir v[j] na sequência ordenada v[1..j-1]
        int i = j - 1;
        while (i >= 0 && v[i] > key)
        {
            v[i + 1] = v[i];
            i--;
        }
        v[i + 1] = key;
    }
}

// Imprime os elementos do vetor
void imprime(int *v, int n)
{
    for (int j = 0; j < n; j++)
        printf("%d ", v[j]);

    printf("\n");
}
