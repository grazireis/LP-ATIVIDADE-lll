#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Variaveis
    int i, j;
    char aluno[5][200];
    float notas[5][3];
    int idade[5];
    float somanotas = 0;
    float media[5];

    // Comandos

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno:\n");
        gets(aluno[i]);

        printf("Digite a idade do aluno:\n");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a nota do aluno:\n");
            scanf("%f", &notas[i][j]);

            somanotas = somanotas + notas[i][j];
        }

        printf("\n");
        media[i] = somanotas / 3;
        somanotas = 0;

        fflush(stdin);
    }
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("Nome do aluno:%s \n", aluno[i]);
        printf("Idade do aluno:%d \n", idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("nota: %.1f\n", notas[i][j]);
        }
        printf("Média do aluno: %.1f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("Aprovado!\n");
            printf("\n");
        }
        else if (media[i] < 5)
        {
            printf("Reprovado!\n");
            printf("\n");
        }
        else
        {
            printf("Recuperação!\n");
            printf("\n");
        }
    }
    return 0;
}