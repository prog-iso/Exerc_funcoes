#include <stdio.h>
#include <locale.h>
#include <math.h>

int verif_primo(int);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    int num;
    printf("Digite um número natural diferente de zero: ");
    scanf("%d", &num);

    if(verif_primo(num)) printf("\nEsse número é primo.\n");
    else printf("\nEsse número não é primo.\n");
}

int verif_primo(int num)
{
    int min = (int)(pow(num,1.0/2));

    if(num<=1) return 0;
    else if(num==2) return 1;

    for(int i=2; i <= min; i++) if(num%i == 0) return 0;
    
    return 1;
}