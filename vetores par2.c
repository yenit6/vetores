#include <stdio.h>

int main()
{
    int size = 6;
    int i;
    int n[size];
    int par = 0;
    int parArray[size];
    int imparArray[size];
    int impar = 0;

    for (i = 0; i < size; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0)
        {
            par++;
            parArray[par - 1] = n[i];
        }
        else
        {
            impar++;
        imparArray[impar - 1] = n[i];
        }
    }

printf("quantidade de numeros pares: %d\n", par);


    for (i = par - 1; i >= 0; i--)
    {
        printf("NUMEROS: %d\n", parArray[i]);
    }

    return 0;
}