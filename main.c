#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int verificacao(string jogador);


int main(void)
{

    printf("\n--PALAVRAS CRUZADAS--\n");

    string jogador1 = get_string("Jogador 1: ");
    int resp1 = verificacao(jogador1);

    string jogador2 = get_string("Jogador 2: ");
    int resp2 = verificacao(jogador2);

    if (resp1 > resp2)
    {
        printf("\nJogador 1 venceu!\n\n");
    }
    else if (resp1 < resp2)
    {
        printf("\nJogador 2 venceu!\n\n");
    }
    else
    {
        printf("\nEmpate!\n\n");
    }

    return 0;
}


int verificacao(string jogador)
{
    char vale1[] = {'A','E','I', 'L', 'N', 'O', 'R', 'S', 'T', 'U', '\0'};
    char vale2[] = {'D','G', '\0'};
    char vale3[] = {'B', 'C','M','P', '\0'};
    char vale4[] = {'F','H','V', 'W', 'Y', '\0'};
    char vale5[] = {'K', '\0'};
    char vale8[] = {'J', 'X', '\0'};
    char vale10[] = {'Q', 'Z', '\0'};

    int cont = 0;

    for (int i = 0; jogador[i] != '\0'; i++)
    {
        char jog1_upper = toupper(jogador[i]);

        for (int j = 0; vale1[j] != '\0'; j++)
        {
            if (jog1_upper == vale1[j])
            {
                cont += 1;
                break;
            }
        }
        for (int k = 0; vale2[k] != '\0'; k++)
        {
            if (jog1_upper == vale2[k])
            {
                cont += 2;
                break;
            }
        }
        for (int l = 0; vale3[l] != '\0'; l++)
        {
            if (jog1_upper == vale3[l])
            {
                cont += 3;
                break;
            }
        }
        for (int m = 0; vale4[m] != '\0'; m++)
        {
            if (jog1_upper == vale4[m])
            {
                cont += 4;
                break;
            }
        }
        for (int n = 0; vale5[n] != '\0'; n++)
        {
            if (jog1_upper == vale5[n])
            {
                cont += 5;
                break;
            }
        }
        for (int o = 0; vale8[o] != '\0'; o++)
        {
            if (jog1_upper == vale8[o])
            {
                cont += 8;
                break;
            }
        }
        for (int p = 0; vale10[p] != '\0'; p++)
        {
            if (jog1_upper == vale10[p])
            {
                cont += 10;
                break;
            }
        }
    }

    return cont;
}
