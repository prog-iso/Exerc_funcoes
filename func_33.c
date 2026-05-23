#include <stdio.h>
#include <locale.h>

void divisores(int num, int* div);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    
    int num, div[1000];

    printf("Escreva um número inteiro positivo: ");
    scanf("%d",&num);
    divisores(num, div);
}

void divisores(int num, int* div)
{
    int cont = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num%i==0)
        {
            if(cont==0) printf("\nOs divisores de %d são:", num);
            printf(" %d,", i);
            div[cont++] = i;    
        }
    }
    printf("\b.\n");
    if(cont==2) printf("\nParabéns!!! Esse número é primo.");
}