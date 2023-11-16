#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[5][200];
    int idades[5];
    int i;

    for (i = 0; i < 5; i++)
    {

        fflush(stdin);

        printf("digite o nome do %d aluno: ", i);
        scanf("%s", &nomes[i]);

        fflush(stdin);

        printf("digite a ida5e do %d aluno: ", i);
        scanf("%d", &idades[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("nome: %s\n", nomes[i]);
        printf("idade: %d\n", idades[i]);
    }

    return 0;
}