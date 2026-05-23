#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    printf("Vamos criar uma tabela\ncom os valores de temperatura de gruas celsius equivalente aos em Farenheit.");

    float temp[101];

    for(int i = 0; i < 101; i++)
    {
        temp[i] = 5*(i + 18.0)/9;
        printf("\n\t%dF vale: %.2f°C", 50+i, temp[i]);
    }
    printf("\n");
}