#include <stdio.h>

int main()
{

    int n[5];
    int i;
    int maior = 0;
    int menor = 9999;

    for (i = 0; i < 5; i++)
    {
        printf("digite %d numero:  ", i);
        scanf("%d", &n[i]);
    
        maior = n[i] > maior ? n[i] : maior;
    
        if (n[i] < menor)
        {
            menor = n[i];
        }
    }

    for ( i = 0; i < 5; i++)
    {
        printf("numero: %d\n", n[i]);
    }
    
printf("maior numero: %d \n", maior);
printf("menor numero: %d\n", menor);
    
    return 0;
}