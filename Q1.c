//pegando maior e menor valor de um vetor

#include <stdio.h>

void maiorMenor(int *vetor, int n, int *maior, int *menor);

int main()
{
    int tamanhoDoVetor = 6;

    int vetorBonitinho[] = {10, 2, 3, 4, 5, 6};

    int menor;
    int maior;

    maiorMenor(vetorBonitinho, tamanhoDoVetor, &maior, &menor);

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
}

void maiorMenor(int *vetor, int n, int *maior, int *menor)
{
    int MenorAtual = vetor[0];
    int MaiorAtual = vetor[0];  

    for (int i=0; i<n; i++)
    {
        if (vetor[i] < MenorAtual)
        {
            MenorAtual = vetor[i];
        }
        if (vetor[i] > MaiorAtual)
        {
            MaiorAtual = vetor[i];
        }
    }
    *maior = MaiorAtual;
    *menor = MenorAtual;
}