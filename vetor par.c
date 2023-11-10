#include <stdio.h>

int main()
{

    int n[6];
    int par;
    int impar = 0;
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("impar: %d\n", impar);
    printf("par: %d", par);

    return 0;
}