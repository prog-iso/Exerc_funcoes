#include <stdio.h>
#include <locale.h>

int soma_n_primeiros(int);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    
    int num;
    printf("Escreva um número inteiro positivo: ");
    scanf("%d", &num);

    printf("A soma de todos os inteiro, indo de 1 até %d é: %d\n", num, soma_n_primeiros(num));
}

/*
// fiz pra testar e deu que essa é mais eficiente
int soma_n_primeiros(int num)
{
    return((num*(num+1))/2);
}
*/

int soma_n_primeiros(int num)
{
    if(num == 1) return 1;
    return num + soma_n_primeiros(num - 1);
}