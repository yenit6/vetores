#include <stdio.h>

int main()
{

    int tamanho = 4;
    int numeros[tamanho];
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("%d numero: %d\n", i + 1, numeros[i]);
    }

    return 0;
}
