//Autores: Taynã Souza Malaquias.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int entradaUsuario;

void abertura()
{
    printf("/**************************/\n");
    printf("/* ESCOLHA O SEU MENU '-' */\n");
    printf("/**************************/\n\n");
}
int menu()
{
    printf("Qual opera��o deseja realizar? Digite o n�mero de sua escolha: \n");
    printf("[1] - Vetor de 10 posi��es elevado ao cubo! \n");
    printf("[2] - Descubra o vetor Y de 3 fun��es! \n");
    printf("[3] - Somar vetor de 10 posi��es! \n");
    printf("[4] - Encontrar n�mero chave em um array de 20 posi��es! \n");
    printf("[5] - Saiba o n�mero determinante de uma matriz 2*2! \n");
    printf("[6] - Para sair do programa! \n");

    scanf("%d", &entradaUsuario);
}
void elevaAoCubo()
{
    char outraOperacao;
    int numero[10];
    printf("\nDigite 10 n�meros inteiros para que possamos elevar ao cubo!\n");

    for (int i = 0; i < 10; i++)
    {
        int auxiliar;

        printf("\nN�mero %d: ", i + 1);
        scanf("%d", &auxiliar);
        numero[i] = auxiliar;
    }

    system("cls");
    printf("\nProntinho, agora veja cada elemento elevado ao cubo, abaixo:\n");
    for (int i = 0; i < 10; i++)
    {
        float potencia = pow(numero[i], 3);
        printf("\nO n�mero %d elevado ao cubo �: |%.0f| (informado na posi��o '%d') \n", numero[i], potencia, i + 1);
    }

    printf("\nDeseja elevar outro n�mero ao cubo? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);
    system("cls");

    if (outraOperacao == 'S' || outraOperacao == 's')
    {
        elevaAoCubo();
    }
}
void calculaVetorY()
{
    char outraOperacao;
    int vetorX[10];
    printf("\nDigite 10 n�meros inteiros que ir�o representar o X!\n");

    for (int i = 0; i < 10; i++)
    {
        int auxiliar;

        printf("\nN�mero %d: ", i + 1);
        scanf("%d", &auxiliar);
        vetorX[i] = auxiliar;
    }

    system("cls");
    printf("Prontinho, agora veja o vetor Y de cada fun��o, abaixo:\n");

    for (int i = 0; i < 10; i++)
    {
        float funcaoY1 = 2 * (vetorX[i]) + 1;
        printf("\nO vetor Y considerando a fun��o: 'Y= 2X + 1', para o valor de X = %d, ser�: %.0f\n", vetorX[i], funcaoY1);

        float funcaoY2 = pow(vetorX[i], 2);
        printf("O vetor Y considerando a fun��o: 'Y= X�', para o valor de X = %d, ser�: %.0f\n", vetorX[i], funcaoY2);

        float funcaoY3 = pow(vetorX[i], 3);
        printf("O vetor Y considerando a fun��o: 'Y= X�', para o valor de X = %d, ser�: %.0f\n\n", vetorX[i], funcaoY3);
    }

    printf("\nDeseja fazer esta opera��o novamente? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);
    system("cls");

    if (outraOperacao == 'S' || outraOperacao == 's')
    {
        calculaVetorY();
    }
}
void somaNumeros()
{
    char outraOperacao;
    int numero[10];
    int somatorio = 0;
    printf("\nDigite 10 n�meros inteiros para que possamos som�-los!\n");

    for (int i = 0; i < 10; i++)
    {
        int auxiliar;

        printf("\nN�mero %d: ", i + 1);
        scanf("%d", &auxiliar);
        numero[i] = auxiliar;
    }
    system("cls");
    printf("Prontinho, agora veja a soma de todos os n�meros, abaixo:\n");

    for (int i = 0; i < 10; i++)
    {
        somatorio += numero[i];

        if (i < 9)
        {
            printf("%d + ", numero[i]);
        }
        else
        {
            printf("%d ", numero[i]);
        }
    }

    printf("= %d \n", somatorio);

    printf("\nDeseja realizar mais um somat�rio? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);
    system("cls");

    if (outraOperacao == 'S' || outraOperacao == 's')
    {
        somaNumeros();
    }
}
void encontraChaveDeBusca()
{
    char outraOperacao;
    int numero[20];
    int chave;
    int achou = 0;

    printf("\nDigite 20 n�meros inteiros:\n");

    for (int i = 0; i < 20; i++)
    {
        int auxiliar;

        printf("\nN�mero %d: ", i + 1);
        scanf("%d", &auxiliar);
        numero[i] = auxiliar;
    }
    system("cls");
    printf("\nAgora digite um n�mero para encontrar em qual posi��o do array ele est�:\n");
    scanf("%d", &chave);

    for (int i = 0; i < 20; i++)
    {
        if (chave == numero[i])
        {
            printf("O n�mero %d foi encontrado na posi��o %d do array!\n", chave, i);
            achou = 1;
        }
    }

    if (achou == 0)
    {
        printf("\nEste n�mero n�o foi encontrado no array!\n");
    }

    printf("\nDeseja realizar esta opera��o novamente? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);
    system("cls");

    if (outraOperacao == 'S' || outraOperacao == 's')
    {
        encontraChaveDeBusca();
    }
}
void encontraDeterminante()
{
    char outraOperacao;
    int matriz[2][2];
    
    int determinante;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nDigite o valor referente a posi��o de matriz %d,%d:\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

         
        }
    }

    printf("\nVeja as posi��es preenchidas: '1,1'->%d, '1,2'->%d, '2,1'->%d, '2,2'->%d,", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);

    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    printf("\nO determinante conforme os n�meros informados, ser�: %d\n", determinante);

    printf("\nDeseja calcular o determinante novamente? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);
    system("cls");

    if (outraOperacao == 'S' || outraOperacao == 's')
    {
        encontraDeterminante();
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int executar = 0;
    char voltarAoMenu;

    printf("\nAluna: Tayn� Souza Malaquias\n\n\n");
    printf("/***************************/\n");
    printf("/Bem vindo � Tay Sistemas!/\n");
    printf("/***************************/\n\n");

    do
    {
        abertura();
        menu();

        switch (entradaUsuario)
        {
        case 1:
            elevaAoCubo();
            break;

        case 2:
            calculaVetorY();
            break;

        case 3:
            somaNumeros();
            break;
        case 4:
            encontraChaveDeBusca();
            break;
        case 5:
            encontraDeterminante();
            break;
        case 6:
            printf("Obrigada por utilizar Tay Sistemas!");
            executar = 1;
            break;

        default:
            printf("\nFa�a uma entrada de um n�mero v�lido! \n");

            break;
        }
    if(executar == 0)
    {
        
        printf("\nDeseja voltar ao menu principal? 'S' ou 'N'\n");
        scanf(" %c", &voltarAoMenu);

        if (voltarAoMenu != 'S' && voltarAoMenu != 's')
        {
            executar = 1;
        }
        system("cls");
    }

    } while (!executar);
}