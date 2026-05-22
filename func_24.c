#include <stdio.h>
#include <locale.h>

int comb(int n, int escolhe_r);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    
    int n, r;
    printf("Escolha um número natural: ");
    scanf("%d", &n);
    printf("Me diga outro número natural, ma menor que o de antes: ");
    scanf("%d", &r);

    printf("O número de combinações possíveis desses dois elementos é: %d\n", comb(n,r));
}

int comb(int n, int r)
{
    int num = 1;
    if(r==0) return 1;
    if(r>n-r)
    {
        for(int i = n; i > r; i--) num *= i;
        for(int i = 1; i <=n-r; i++) num /= i;
    }
    else
    {
        for(int i = n; i > n-r; i--) num *= i;
        for(int i = 1; i <=r; i++) num /= i;
    }
    return num;
}