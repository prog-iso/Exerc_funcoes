#include <stdio.h>
#include <locale.h>

double conv_dec_para_bin(int);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");

    int num;
    printf("Escreva um número natural: ");
    scanf("%d", &num);

    printf("\nEsse número em binário é: %g\n", conv_dec_para_bin(num));
}

double conv_dec_para_bin(int num)
{
    if(num == 1) return 1;
    if(num == 0) return 0;
    return num%2 + 10*conv_dec_para_bin(num/2);
}