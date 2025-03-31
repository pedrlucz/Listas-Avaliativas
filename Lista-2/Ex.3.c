#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    system("clear");

    int i;
    int j;
    int k;
    int resultado;
    int matrizA[4][4];
    int matrizB[4][4];
    char menu[10];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d%*c", &matrizA[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    scanf("%s%*c", menu);

    if ((strcmp(menu, "soma") == 0))
    {
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                resultado = matrizA[i][j] + matrizB[i][j];
                char temp[4] = {'\0', '\0', '\0', '\0'};

                sprintf(temp, "%d", resultado);

                int qtd_espaco = 4 - strlen(temp);
                while (qtd_espaco--)
                {
                    printf(" ");
                }
                printf("%d", resultado);
            }
            printf("\n");
        }
    }
    if ((strcmp(menu, "sub") == 0))
    {
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                resultado = matrizA[i][j] - matrizB[i][j];
                char temp[4] = {'\0', '\0', '\0', '\0'};

                sprintf(temp, "%d", resultado);

                int qtd_espaco = 4 - strlen(temp);
                while (qtd_espaco--)
                {
                    printf(" ");
                }
                printf("%d", resultado);
            }
            printf("\n");
        }
    }
    if ((strcmp(menu, "mult") == 0))
    {
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                resultado = 0;
                for (k = 0; k < 4; k++)
                {
                    resultado = resultado + (matrizA[i][k] * matrizB[k][j]);
                }
                char temp[4] = {'\0', '\0', '\0', '\0'};

                sprintf(temp, "%d", resultado);

                int qtd_espaco = 4 - strlen(temp);
                while (qtd_espaco--)
                {
                    printf(" ");
                }
                printf("%d", resultado);
            }
            printf("\n");
        }

        return 0;
    }
}