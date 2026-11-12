#include <stdio.h>

void extrairDiagonal(int *matriz, int ordem, int *vetorDiagonal);
void imprimirVetor(int *vetor, int n);

int main()
{
    int ordem = 3;

    int matriz[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int vetorDiagonal[3];


    extrairDiagonal((int *)matriz, ordem, vetorDiagonal);
  
    printf("Diagonal principal extraida: ");
    imprimirVetor(vetorDiagonal, ordem);

    return 0;
}

void extrairDiagonal(int *matriz, int ordem, int *vetorDiagonal)
{

    for (int i = 0; i < ordem; i++)
    {
        vetorDiagonal[i] = matriz[i * ordem + i];
    }
}

void imprimirVetor(int *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
