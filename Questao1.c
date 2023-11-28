#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    // Declaração de variaveis
    int i;
    char nome[5][50];
    int idade[5];
    float peso[5];
    float altura[5], maioraltura = INT_MIN, menoraltura = INT_MAX, maiorpeso = INT_MIN, menorpeso = INT_MAX;
    int maioridade = INT_MIN, menoridade = INT_MAX;

    // Comandos
    printf("Olá seja bem vindo ao Programa!\n");
    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Digite o %dº nome:", i + 1);
        gets(nome[i]);
        printf("Digite a sua idade:");
        scanf("%d", &idade[i]);
        printf("Digite o seu peso:");
        scanf("%f", &peso[i]);
        printf("Digite a sua altura:");
        scanf("%f", &altura[i]);

        if (altura[i] > maioraltura)
        {
            maioraltura = altura[i];
        }
        if (altura[i] < menoraltura)
        {
            menoraltura = altura[i];
        }

        printf("\n");

        maioridade = idade[i] > maioridade ? idade[i] : maioridade;
        menoridade = idade[i] < menoridade ? idade[i] : menoridade;

        maioraltura = altura[i] > maioraltura ? altura[i] : maioraltura;
        menoraltura = altura[i] < menoraltura ? altura[i] : menoraltura;

        maiorpeso = peso[i] > maiorpeso ? peso[i] : maiorpeso;
        menorpeso = peso[i] < menorpeso ? peso[i] : menorpeso;
    }

    printf("\n");

    system("cls");
    for (i = 0; i < 5; i++)
    {
        printf("Seu %dº nome: %s \n", i + 1, nome[i]);
        printf("Sua idade: %d \n", idade[i]);
        printf("Seu peso: %.2f \n", peso[i]);
        printf("Sua altura: %.2f \n", altura[i]);
        printf("\n");
    }

    printf("Seu Maior / Menor:\n");
    printf("\n");
    printf("Seu maior peso: %.2f \n", maiorpeso);
    printf("Seu menor peso: %.2f \n", menorpeso);
    printf("\n");
    printf("Sua maior altura: %.2f \n", maioraltura);
    printf("Sua menor altura: %.2f \n", menoraltura);
    printf("\n");
    printf("Sua maior idade: %d \n", maioridade);
    printf("Sua menor idade: %d \n", menoridade);

    return 0;
}
