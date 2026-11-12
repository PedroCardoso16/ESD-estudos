#include <stdio.h>

int ehSimetrica(int *matriz, int ordem);

int main()
{
    // Não simétrica
    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Simétrica (A[i][j] == A[j][i])
    int matrizB[3][3] = {
        {1, 7, 3},
        {7, 4, 5},
        {3, 5, 6}
    };

    int ordem = 3;

    if (ehSimetrica((int *)matrizA, ordem))
        printf("Matriz A eh simetrica!\n");
    else
        printf("Matriz A NAO eh simetrica!\n");

    if (ehSimetrica((int *)matrizB, ordem))
        printf("Matriz B eh simetrica!\n");
    else
        printf("Matriz B NAO eh simetrica!\n");

    return 0;
}

int ehSimetrica(int *matriz, int ordem)
{

    for (int i = 0; i < ordem; i++)
    {

        for (int j = i + 1; j < ordem; j++)
        {
            int elementoOriginal = matriz[i * ordem + j]; // Posição (i, j)
            int elementoEspelho  = matriz[j * ordem + i]; // Posição (j, i)

            if (elementoOriginal != elementoEspelho)
            {
                return 0; 
            }
        }
    }

    return 1;
}
