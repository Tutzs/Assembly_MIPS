#include <stdio.h>
int main()
{
    int i, qtdAero, qtdVoos, x, y, maior, testes = 1;

    scanf("%d %d", &qtdAero, &qtdVoos);
    while (qtdAero != 0 && qtdVoos != 0)
    {
        int voos[qtdAero];
        for (i = 0; i <= qtdAero; i++)
            voos[i] = 0;
        for (i = 0; i < qtdVoos; i++)
        {
            scanf("%d %d", &x, &y);
            voos[x]++;
            voos[y]++;
        }

        maior = voos[0];
        for (i = 1; i <= qtdAero; i++)
        {
            if (voos[i] >= maior)
                maior = voos[i];
        }

        printf("Teste %d\n", testes);
        for (i = 0; i <= qtdAero; i++)
        {
            if (voos[i] == maior)
                printf("%d ", i);
        }
        printf("\n\n");

        scanf("%d %d", &qtdAero, &qtdVoos);
        testes++;
    }

    return 0;
}