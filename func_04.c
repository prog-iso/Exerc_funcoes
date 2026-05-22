#include <stdio.h>
#include <locale.h>

int inverte(int);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nEsse número invertido é: %d\n", inverte(num));
}

int inverte(int num)
{
    int outro = 0;
    while(num > 0)
    {
        outro *= 10;
        outro += num%10;
        num /= 10;
    }

    return outro;
}