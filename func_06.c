#include <stdio.h>
#include <locale.h>

int fatorial(int);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    int num;
    printf("Digite um número inteiro e positivo: ");
    scanf("%d",&num);

    printf("O fatorial desse número é: %d\n", fatorial(num));
}

int fatorial(int num)
{
    int c = 1;
    for(int i = 2; i <= num; i++) c *= i;
    return c;
}

/*
int fatorial(int num)
{
    if(num==1) return 1;
    return num*fatorial(num-1);
}
*/