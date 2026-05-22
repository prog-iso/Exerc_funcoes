#include <stdio.h>
#include <locale.h>

int tipo_triang(int, int, int);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    int a, b, c;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    
    printf("Digite mais um número inteiro: ");
    scanf("%d", &c);
    
    printf("Vejamos se esses 3 números podem representar os lados de um triângulo:\n");
    
    int resp = tipo_triang(a,b,c);
    if(resp == 0) printf("\tDesculpa, mas não podemos formar um triângulo com essas medidas.\n");
    else if(resp == 1) printf("\tUau, todos os números são iguais e posivos.\n\tCom isso temos um triângulo equilátero.\n");
    else if(resp == 2) printf("\tOlha que legal, temos 2 números iguais e positivos\n\tE, com esses números, nós podemos montar um triângulo isósceles\n");
    else if(resp == 3) printf("\tDessa vez temos 3 números diferente.\n\tMas, ainda conseguimos fazer um triângulo escaleno.\n");
}

int tipo_triang(int a, int b, int c)
{
    if(a <= 0 || b<= 0 || c<= 0) return 0;

    while(a > b || b > c)
    {
        if(b >c)
        {
            int aux = c;
            c = b;
            b = aux;
        }
        if(a > b)
        {
            int aux = b;
            b = a;
            a = aux;
        }
    }

    if(a < (c - b) || c > (a + b)) return 0;
    if(a == b && b == c) return 1;
    if(a==b || b==c) return 2;
    return 3;
}