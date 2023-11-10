#include <stdio.h>

int main()
{

    int tamanho = 4;
    int i;
    float media;
    int soma = 0;
    int nota[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        printf("digite a %d nota: ", i + 1);
        scanf("%d", &nota[i]);
        soma += nota[i];
    }

    media = soma / tamanho;

    for (i = 0; i < tamanho; i++)
    {
        printf("nota: %d\n", nota[i]);
    }

    printf("soma: %d\n", soma);
    printf("media: %.1f\n", media);

    if (media >= 7)
    {
        printf("aprovado seu corno");
    }
    else if (media >= 5)
    {
        printf("recuperasao otario");
    }
    else
    {
        printf("reprovado seu animal burro ");
    }

    return 0;
}