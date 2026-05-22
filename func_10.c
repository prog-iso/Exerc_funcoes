#include <stdio.h>
#include <locale.h>
#include <math.h>

int verif_primo(int);

int main()
{
   setlocale(LC_ALL,"pt_BR.UTF-8");
   setlocale(LC_NUMERIC,"C");

   int menor, maior;
   printf("Escreva um número inteiro positivo: ");
   scanf("%d",&menor);
   printf("\nAgora, um número inteiro maior que o de antes: ");
   scanf("%d",&maior);

   int cont = 0;
   for(int i = menor+1; i < maior; i++) if(verif_primo(i)) cont++;

   printf("\nEntre esses dois números há %d números primos.\n", cont);
}


int verif_primo(int num)
{
    int min = (int)(pow(num,1.0/2));

    if(num<=1) return 0;
    else if(num==2) return 1;

    for(int i=2; i <= min; i++) if(num%i == 0) return 0;
    
    return 1;
}