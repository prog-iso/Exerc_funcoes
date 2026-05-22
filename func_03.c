#include <stdio.h>
#include <locale.h>

float pot(int, int);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    int a, b;

    printf("Escreva o valor da base: ");
    scanf("%d", &a);

    printf("Escreva o valor do exponte: ");
    scanf("%d", &b);

    printf("O valor de %d elevado a %d é: %g\n", a, b, pot(a, b));
}

float pot(int a, int b)
{
    float c = 1;
    if(b>0) for(int i = 0; i < b; i++) c *= a;
    else if(b<0) for(int i = 0; i < -b; i++) c /= a;

    return c;
}