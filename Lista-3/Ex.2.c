#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main(){

        //system("cls");

        int meses = 1;
        double aporte_mensal = 0;
        double retorno_mensal = 0;
        double valor_total[250];

        scanf("%d", &meses);
        scanf("%lf", &aporte_mensal);
        scanf("%lf", &retorno_mensal);

        retorno_mensal += 1;

        for (int i = 1; i < meses+1; i++)
        {
            valor_total[i] = aporte_mensal * (retorno_mensal);
            valor_total[i] *= (pow(retorno_mensal, i) - 1) / retorno_mensal;

            valor_total[i] += aporte_mensal;
            valor_total[i] += valor_total[i-1]; 

            printf("Montante ao fim do mes %d: R$ %.2lf\n", i, valor_total[i]);
        }
        return 0;
    }