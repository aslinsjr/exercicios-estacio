#include <stdio.h>

void recebendoDados()
    {
        char nome[20];
        int idade, matricula, resultado;
        float altura;

        printf("Cadastro de Alunos \n");
        printf("\n");

        printf("Insira seu nome: ");
        scanf(" %s", &nome);
        printf("\n");

        printf("Insira sua idade: ");
        scanf(" %d", &idade);
        printf("\n");

        printf("Insira seu número de matrícula: ");
        scanf(" %d", &matricula);
    };



int main()
{
    recebendoDados();
}