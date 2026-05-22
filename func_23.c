#include <stdio.h>
#include <locale.h>

void num_5_mod_13(int min,int max);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    int min, max;
    printf("Escolha um número inteiro: ");
    scanf("%d", &min);
    printf("Agora, escolha outro que seja maior que o de antes: ");
    scanf("%d",&max);

    num_5_mod_13(min, max);
}

void num_5_mod_13(int min,int max)
{
    int cont = 0;
    for (int i = min; i <= max; i++)
    {
        if(i%13 == 5)
        {
            if(cont==0) printf("\nOs números que deixam resto 5 na divisão por 13 no intervalo de %d até %d são:", min, max);
            printf("\n--->\tO %dº número é: %d", ++cont, i);
        }
    }
    printf("\n");
    if(cont==0) printf("Desculpa, nenhum número entre %d e %d deixa resto 5 na divisão por 13\n", min, max);
}