# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "dados.h"

void receber_nome_cliente (cliente_banco vetor[], int num)
{
        printf("NOME: ");
        fflush(stdin);
        scanf("%[^\n]s",&vetor[num].cliente_dados.cliente_nome.nome);
        printf("SOBRENOME: ");
        fflush(stdin);
        scanf("%[^\n]s",&vetor[num].cliente_dados.cliente_nome.sobrenome);
}

void receber_dados_cliente (cliente_banco vetor[], int num)
{
    printf("\n=============================== ENDERECO ====================\n");
    printf("RUA: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].cliente_dados.rua);
     printf("BAIRRO: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].cliente_dados.bairro);
     printf("CIDADE: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].cliente_dados.cidade);
     printf("ESTADO: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].cliente_dados.estado);
    printf("\n============================== DADOS PESSOAIS ================\n");
    printf("CPF: ");
    scanf("%d",&vetor[num].cliente_dados.cpf);
    printf("RG: ");
    scanf("%d",&vetor[num].cliente_dados.rg);
    printf("\n============================= DATA DE NASCIMENTO ==============\n");
    printf("DIA: ");
    scanf("%d",&vetor[num].cliente_dados.dia);
    printf("MES: ");
    scanf("%d",&vetor[num].cliente_dados.mes);
    printf("ANO: ");
    scanf("%d",&vetor[num].cliente_dados.ano);
}

void receber_dados_banco (cliente_banco vetor[], int num)
{
    printf("\n================================= BANCO ======================\n");
    printf("NUMERO DO BANCO: ");
    scanf("%d",&vetor[num].numero_banco);
    printf("NUMERO DA AGENCIA: ");
    scanf("%d",&vetor[num].numero_agencia);
    printf("NUMERO DA CONTA COM 4 DIGITO: ");
    do
    {
        fflush(stdin);
        scanf("%[^\n]s",&vetor[num].numero_conta);
    }while(vetor[num].numero_conta[2] == NULL  || vetor[num].numero_conta[3] == NULL || vetor[num].numero_conta[4] != NULL);
    printf("SENHA 4 DIGITO: ");
    do
    {
        fflush(stdin);
        scanf("%[^\n]s",&vetor[num].senha);
    }while (vetor[num].senha[2] == NULL || vetor[num].senha[3] == NULL || vetor[num].senha[4] != NULL );
    printf("QUANTIA DEPOSITO: ");
    scanf("%f",&vetor[num].saldo);

}
