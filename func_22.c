#include <stdio.h>
#include <locale.h>
#include <math.h>

int min_quad_maior(float);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    float num;
    printf("Escreva um número real positivo: ");
    scanf("%f", &num);

    int quad = min_quad_maior(num);
    printf("\nO menor inteiro cujo quadrado é maior que o número dado é: %d.\n\tSó para verificar veja que o quadrado dele é %d.\n", quad, quad*quad);

}

int min_quad_maior(float num)
{
    return (int)pow(num,1.0/2) + 1;
}