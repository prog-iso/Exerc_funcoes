#include <stdio.h>
#include <locale.h>

void reescreve_em_romano(int, char*);
int inverte(int);

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    int numero;

    printf("Escreva um número inteiro, positivo e até 9999: ");
    scanf("%d", &numero);

    char romano[19];
    reescreve_em_romano(numero, romano);

    printf("Esse mesmo número em algarismos romanos é: %s\n", romano);
}

void reescreve_em_romano(int num, char* romano)
{
    int cont = 0;

    if(num >= 1000)
    {
        int aux = num/1000;
        switch (aux)
        {
        case 1:
            romano[cont++] = 'M';
            break;
        case 2:
            romano[cont++] = 'M';
            romano[cont++] = 'M';
            break;
        case 3:
            romano[cont++] = 'M';
            romano[cont++] = 'M';
            romano[cont++] = 'M';
            break;
        case 4:
            romano[cont++] = 'M';
            romano[cont++] = 'V';
            romano[cont++] = '\xCC';
            romano[cont++] = '\x84';
            break;
        case 5:
            romano[cont++] = 'V';
            romano[cont++] = '\xCC';
            romano[cont++] = '\x84';
            break;
        case 6:
            romano[cont++] = 'V';
            romano[cont++] = '\xCC';
            romano[cont++] = '\x84';
            romano[cont++] = 'M';
            break;
        case 7:
            romano[cont++] = 'V';
            romano[cont++] = '\xCC';
            romano[cont++] = '\x84';
            romano[cont++] = 'M';
            romano[cont++] = 'M';
            break;
        case 8:
            romano[cont++] = 'V';
            romano[cont++] = '\xCC';
            romano[cont++] = '\x84';
            romano[cont++] = 'M';
            romano[cont++] = 'M';
            romano[cont++] = 'M';
            break;
        case 9:
            romano[cont++] = 'M';
            romano[cont++] = 'X';
            romano[cont++] = '\xCC';
            romano[cont++] = '\x84';
            break;
        }
        num = num%1000;
    }

    if(num >= 100)
    {
        int aux = num/100;
        switch (aux)
        {
        case 1:
            romano[cont++] = 'C';
            break;
        case 2:
            romano[cont++] = 'C';
            romano[cont++] = 'C';
            break;
        case 3:
            romano[cont++] = 'C';
            romano[cont++] = 'C';
            romano[cont++] = 'C';
            break;
        case 4:
            romano[cont++] = 'C';
            romano[cont++] = 'D';
            break;
        case 5:
            romano[cont++] = 'D';
            break;
        case 6:
            romano[cont++] = 'D';
            romano[cont++] = 'C';
            break;
        case 7:
            romano[cont++] = 'D';
            romano[cont++] = 'C';
            romano[cont++] = 'C';
            break;
        case 8:
            romano[cont++] = 'D';
            romano[cont++] = 'C';
            romano[cont++] = 'C';
            romano[cont++] = 'C';
            break;
        case 9:
            romano[cont++] = 'C';
            romano[cont++] = 'M';
            break;
        }
        num = num%100;
    }

    if(num >= 10)
    {
        int aux = num/10;
        switch (aux)
        {
        case 1:
            romano[cont++] = 'X';
            break;
        case 2:
            romano[cont++] = 'X';
            romano[cont++] = 'X';
            break;
        case 3:
            romano[cont++] = 'X';
            romano[cont++] = 'X';
            romano[cont++] = 'X';
            break;
        case 4:
            romano[cont++] = 'X';
            romano[cont++] = 'L';
            break;
        case 5:
            romano[cont++] = 'L';
            break;
        case 6:
            romano[cont++] = 'L';
            romano[cont++] = 'X';
            break;
        case 7:
            romano[cont++] = 'L';
            romano[cont++] = 'X';
            romano[cont++] = 'X';
            break;
        case 8:
            romano[cont++] = 'L';
            romano[cont++] = 'X';
            romano[cont++] = 'X';
            romano[cont++] = 'X';
            break;
        case 9:
            romano[cont++] = 'X';
            romano[cont++] = 'C';
            break;
        }
        num = num%10;
    }

    if(num > 0)
    {
        switch (num)
        {
        case 1:
            romano[cont++] = 'I';
            break;
        case 2:
            romano[cont++] = 'I';
            romano[cont++] = 'I';
            break;
        case 3:
            romano[cont++] = 'I';
            romano[cont++] = 'I';
            romano[cont++] = 'I';
            break;
        case 4:
            romano[cont++] = 'I';
            romano[cont++] = 'V';
            break;
        case 5:
            romano[cont++] = 'V';
            break;
        case 6:
            romano[cont++] = 'V';
            romano[cont++] = 'I';
            break;
        case 7:
            romano[cont++] = 'V';
            romano[cont++] = 'I';
            romano[cont++] = 'I';
            break;
        case 8:
            romano[cont++] = 'V';
            romano[cont++] = 'I';
            romano[cont++] = 'I';
            romano[cont++] = 'I';
            break;
        case 9:
            romano[cont++] = 'I';
            romano[cont++] = 'X';
            break;
        }
    }

    romano[cont] = '\0';
}