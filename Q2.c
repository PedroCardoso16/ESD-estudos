
//A função deve buscar o valor dentro do vetor (de tamanho n).

//Retornar a quantidade total de vezes (frequência) que o valor aparece no vetor.

//Atualizar o valor apontado por primeiraPosicao com o índice da primeira vez que o número foi encontrado.

//Atualizar o valor apontado por ultimaPosicao com o índice da última vez que o número foi encontrado.

//Caso o elemento não exista no vetor, a função deve retornar 0, 
//e tanto primeiraPosicao quanto ultimaPosicao devem receber -1.

#include <stdio.h>

int contarFrequencia(int *vetor, int n, int valor, int *primeiraPosicao, int *ultimaPosicao);

int main()
{
    int vetor[] = {4, 2, 7, 2, 5, 2, 8};
    int n = 7;
    int valorBuscado = 2;

    int posPrimeiro, posUltimo;

    int total = contarFrequencia(vetor, n, valorBuscado, &posPrimeiro, &posUltimo);

    printf("Valor buscado: %d\n", valorBuscado);
    printf("Frequencia total: %d\n", total);
    printf("Primeira ocorrencia (indice): %d\n", posPrimeiro);
    printf("Ultima ocorrencia (indice): %d\n", posUltimo);

    return 0;
}

int contarFrequencia(int *vetor, int n, int valor, int *primeiraPosicao, int *ultimaPosicao)
{
    int frequencia = 0;


    *primeiraPosicao = -1;
    *ultimaPosicao = -1;

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] == valor)
        {
            if (frequencia == 0)
            {
                *primeiraPosicao = i;
            }
            
            *ultimaPosicao = i;

            frequencia++;
        }
    }

    return frequencia;
}