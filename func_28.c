#include <stdio.h>
#include <locale.h>

int fibon(int num);
float num_aureo(int num);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    int num;
    printf("Escreva um número: ");
    scanf("%d", &num);

    printf("\nO %dº termo da sequência de Fibonacci %d\n", num, fibon(num));

    printf("\nAgora vejamos os quanto dá a razão do\npróximo número na seq. de fibonacci por ele dá: %g\n", num_aureo(num));
}

int fibon(int num)
{
    int a = 0,b = 1;
    for(int i = 0; i < num; i++)
    {
        int c = b;
        b +=a;
        a = c;
    }
    return a;
}

float num_aureo(int num)
{return (float)fibon(num+1)/fibon(num);}