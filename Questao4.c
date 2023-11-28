#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declara��o de vari�veis
    int i = 0;
    int numero[5];
    int par = 0, impar = 0;
    int positivo, negativo, somaPares = 0, soma = 0;
    int maiorNumero, menorNumero = INT_MAX;
    float media, mediaPares;

    // Comando
    printf("Bem Vindo ao programa!\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite %d� n�mero:", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            par++;
            somaPares = somaPares + numero[i];
        }
        else
        {
            impar++;
        }

        soma = soma + numero[i];

        if (numero[i] > 0)
        {
            positivo++;
        }
        else
        {
            negativo--;
        }
        if (numero[i] > maiorNumero)
        {
            maiorNumero = numero[i];
        }

        menorNumero = numero[i] < menorNumero ? numero[i] : menorNumero;
    }

    media = soma / 5;
    if (par != 0)
    {
        mediaPares = somaPares / par;
    }

    printf("\n");
    printf("Mostrando informa��es solicitadas;\n");
    printf("\n");
    printf("Quantidade de impares:%d\n", impar);
    printf("\n");
    printf("N�meros negativo:%d\n", negativo);
    printf("\n");
    printf("Soma dos n�meros pares:%d\n", impar);
    printf("\n");
    printf("M�dia dos pares:%.2f\n", mediaPares);
    printf("\n");
    printf("M�dia de todos os numeros inseridos:%.2f\n", media);
    printf("\n");
    printf("Maior n�mero: %d\n", maiorNumero);
    printf("Menor n�mero: %d\n", menorNumero);
    return 0;
}