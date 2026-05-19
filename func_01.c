#include <stdio.h>
#include <locale.h>

int mult(int, int);

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    setlocale(LC_NUMERIC, "C");

    int a, b;

    printf("Escreva o primeiro valor: ");
    scanf("%d", &a);
    printf("Escreva o segundo valor: ");
    scanf("%d", &b);

    printf("\nO valor do produto de %d com %d é: %d\n\n", a, b, mult(a,b));

}

int mult(int a, int b)
{
    if(b > a)
    {
        int c = b;
        b = a;
        a = c;
    }

    int c = 0;
    if(b > 0) for(int i = 0; i < b; i++) c += a;
    else if(b < 0) for(int i = 0; i < -1*b; i++)  a += a;

    return c;
}