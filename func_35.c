#include <stdio.h>

int str_tam(char* str)
{
    int cont = 0;
    while(str[cont]!='\0') cont++;
    return cont;
}

int str_igual(char* str_1, char* str_2)
{
    int cont = 0;
    while(str_1[cont] != '\0' && str_2[cont] != '\0')
    {
        if(str_1[cont] != str_2[cont]) return 0;
        cont++;
    }
    if(str_1[cont] != str_2[cont]) return 0;
    return 1;
}

void str_copia_n(char* str_dest, char* str_orig, int quant)
{
    for(int i = 0; i < quant; i++) str_dest[i] = str_orig[i];
}

void str_adicao(char* str_dest, char* str_adic)
{
    int cont_dest = 0, cont_adic = 0;
    while(str_dest[cont_dest]!='\0') cont_dest++;
    while(str_adic[cont_adic]!='\0') str_dest[cont_dest++] = str_adic[cont_adic++];
}

void str_rep(char* str_base, char* str_rep, int* rep)
{
    int cont = 0;

    for(int i = 0; str_base[i]!='\0'; i++)
    {
        for(int j = 0; str_rep[j] == str_base[i+j] && str_rep[j]!='\0'; j++)
        {
            if(str_rep[j+1]=='\0')
            {
                rep[cont] = i+1;
                cont++;
            }
        }
    }
}
