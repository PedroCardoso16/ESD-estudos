#include <stdio.h>

int multiplicarParesPorEscalar(int *matriz, int ordem, int escalar);
void imprimirMatriz(int *matriz, int ordem);

int main()
{
    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int ordemA = 3;
    int escalar = 10;

    printf("Matriz Original:\n");
    imprimirMatriz((int *)matrizA, ordemA);

    // Chamada da função com cast para (int *)
    int modificados = multiplicarParesPorEscalar((int *)matrizA, ordemA, escalar);

    printf("\nMatriz Alterada:\n");
    imprimirMatriz((int *)matrizA, ordemA);

    printf("\nTotal de elementos modificados: %d\n", modificados);

    return 0;
}

int multiplicarParesPorEscalar(int *matriz, int ordem, int escalar)
{
    int total = ordem * ordem;
    int count = 0;

    for (int i = 0; i < total; i++)
    {
        if (matriz[i] % 2 == 0)
        {
            matriz[i] = matriz[i] * escalar; 
            count++;
        }
    }
    return count;
}

void imprimirMatriz(int *matriz, int ordem)
{
    for (int i = 0; i < ordem; i++)
    {
        for (int j = 0; j < ordem; j++)
        {
            printf("%2d ", matriz[i * ordem + j]);
        }
        printf("\n");
    }
}
