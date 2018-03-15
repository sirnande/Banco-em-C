# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "dados.h"

int verificar_cliente(cliente_banco vetor[], int quant)
{
    char consulta_cliente[20];
    int i, j, n, cont=0;

    printf("DIGITE O NOME DO CLIENTE: ");
    fflush(stdin);
    scanf("%[^\n]s",&consulta_cliente);
    n = strlen(consulta_cliente);
    for (i = 0; i < n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (vetor[i].cliente_dados.cliente_nome.nome[j] == consulta_cliente[j])
              {
                  cont++;
              }

        }
        if(cont == n)
        {
            return i;
        }
    }
    return -1;
}

int verificar_cliente_conta(cliente_banco vetor[], int quant)
{
    int i;
    char conta[5];
    printf("QUAL O NUMERO DA CONTA: ");
    fflush(stdin);
    scanf("%[^\n]s",&conta);
    for (i=0; i<quant; i++)
    {
        if (conta[0] == vetor[i].numero_conta[0] && conta[1]==vetor[i].numero_conta[1] && conta[2]==vetor[i].numero_conta[2] && conta[3]==vetor[i].numero_conta[3])
            {
                return i;
            }
    }
    return -1;

}

int verificar_cliente_senha(cliente_banco vetor[], int quant)
{
    int i;
    char senha1[5];
    printf("DIGITE A SUA SENHA: ");
    fflush(stdin);
    scanf("%[^\n]s",&senha1);
    for (i=0; i<quant; i++)
    {
        if (senha1[0] == vetor[i].senha[0] && senha1[1]==vetor[i].senha[1] && senha1[2]==vetor[i].senha[2] && senha1[3]==vetor[i].senha[3])
            {
                return i;
            }
    }
    return -1;

}

int verificar_cliente_agencia (cliente_banco vetor[], int quant)
{
    int i, ag;
    printf("DIGITE A AGENCIA: ");
    scanf("%d",&ag);
    for (i=0; i< quant; i++)
    {
        if (ag == vetor[i].numero_agencia)
            {
                return i;
            }
    }

    return -1;
}

int verificar_cliente_banco (cliente_banco vetor[], int quant)
{
    int i, banc;
    printf("DIGITE O NUMERO DO BANCO: ");
    scanf("%d",&banc);
    for (i=0; i<quant; i++)
    {
        if (banc == vetor[i].numero_banco)
        {
            return i;
        }
    }
  return -1;
}
