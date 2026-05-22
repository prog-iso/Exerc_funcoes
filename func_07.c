#include <stdio.h>
#include <locale.h>
#include <string.h>

int ver_palin(char*);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    char palavra[50];
    printf("Escreva uma palavra: ");
    fgets(palavra, 50, stdin);

    if(ver_palin(palavra)) printf("\nÉ um palindromo.\n");
    else printf("\nNão é um palindromo\n");
}

int ver_palin(char* palavra)
{
    int tam = strlen(palavra)-1;
    
    for(int i = 0; i < tam/2; i++) if(palavra[i]!=palavra[tam-1-i]) return 0;

    return 1;
}