#include <stdio.h>
#include <locale.h>

int pot(int, int)

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    int a, b;

    printf("Escreva o valor da base: ");
    scanf("%d", &a);

    printf("Escreva o valor do exponte: ");
    scanf("%d", &b);

    printf("O valor de %d elevado a %d é: %d", a, b, pot(a, b));
}

int pot(int a, int b);