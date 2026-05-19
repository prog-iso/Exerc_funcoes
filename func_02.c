#include <stdio.h>
#include <locale.h>

int div(int, int);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    int a, b;

    printf("Digite o numerador: ");
    scanf("%d", &a);

    printf("Digite o denominador: ");
    scanf("%d", &b);

    printf("A divisão %d/%d, nos inteiros dá: %d\n\n", a, b, div(a,b));
}

int div(int a, int b)
{
    int cont = 0;
    while(a >= b)
    {
        a -= b;
        cont++;
    }
    return cont;
}