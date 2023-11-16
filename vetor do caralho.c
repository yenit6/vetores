#include <stdio.h>

int main()
{

    int size = 5;
    int par = 0;
    int impar = 0;
    int soma = 0;
    int num[size];
    int positivo = 0;
    int negativo = 0;
    int i;
    float media;
    float mediaPar;
    float mediaImpar;
    int somaPar = 0;
    int somaIMpar = 0;
    int maior = 0;
    int menor = 9999;

    for (i = 0; i < size; i++)
    {

        printf("digite um numero: ");
        scanf("%d", &num[i]);
        soma += num[i];

        if (num[i] % 2 == 0)
        {
            par++;
            somaPar += num[i];
        }
        else
        {
            impar++;
            somaIMpar += num[i];
        }

        if (num[i] > 0)
        {
            positivo++;
        }

        if (num[i] < 0)
        {
            negativo++;
        }

        if (num[i] > maior)
        {
            maior = num[i];
        }

        if (num[i] < menor)
        {
            menor = num[i];
        }
    }

    media = soma / (float)size;
    mediaPar = somaPar / (float)par;
    mediaImpar = somaIMpar / (float)impar;

    for (i = 4; i >= 0; i--)
    {
        printf("numeros: %d\n", num[i]);
    }

    printf("par: %d\n", par);
    printf("impar: %d\n", impar);
    printf("positivos: %d\n", positivo);
    printf("negativos: %d\n", negativo);
    printf("quantidade: %d\n", size);
    printf("media par: %.1f\n", mediaPar);
    printf("media impar: %.1f\n", mediaImpar);
    printf("media: %.1f\n", media);
    printf("soma par: %d\n", somaPar);
    printf("soma impar: %d\n", somaIMpar);
    printf("soma: %d\n", soma);

    printf("maior numero: %d \n", maior);
    printf("menor numero: %d\n", menor);

    return 0;
}