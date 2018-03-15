# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "dados.h"

void excluir_conta_cliente (cliente_banco vetor[], int num)
{
   scanf("%s",&vetor[num].cliente_dados.cliente_nome.nome);
    scanf("%s",&vetor[num].cliente_dados.cliente_nome.sobrenome);
    scanf("%s",&vetor[num].cliente_dados.rua);
    scanf("%s",&vetor[num].cliente_dados.bairro);
    scanf("%s",&vetor[num].cliente_dados.cidade);
    scanf("%s",&vetor[num].cliente_dados.estado);
   vetor[num].cliente_dados.cpf = NULL;
   vetor[num].cliente_dados.rg = NULL;
   vetor[num].cliente_dados.dia = NULL;
   vetor[num].cliente_dados.mes = NULL;
   vetor[num].cliente_dados.ano = NULL;
   vetor[num].numero_banco = NULL;
   vetor[num].numero_agencia = NULL;
    scanf("%s",&vetor[num].numero_conta);
    scanf("%s",&vetor[num].senha);
    vetor[num].saldo = 0.00;
}

