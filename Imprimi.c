# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "dados.h"

void printf_nome_cliente (cliente_banco vetor[], int num)
{
        printf("NOME:%s %s\n",vetor[num].cliente_dados.cliente_nome.nome, vetor[num].cliente_dados.cliente_nome.sobrenome);

}

void printf_dados_cliente (cliente_banco vetor[], int num)
{
    printf("\n=============================== ENDERECO ====================\n");
    printf("RUA:%s ",vetor[num].cliente_dados.rua);
    printf("BAIRRO:%s \n",vetor[num].cliente_dados.bairro);
    printf("CIDADE:%s ",vetor[num].cliente_dados.cidade);
    printf("ESTADO:%s \n",vetor[num].cliente_dados.estado);
    printf("\n============================== DADOS PESSOAIS ================\n");
    printf("CPF:%d ",vetor[num].cliente_dados.cpf);
    printf("RG:%d \n",vetor[num].cliente_dados.rg);
    printf("DATA NASC: %d / %d / %d \n",vetor[num].cliente_dados.dia, vetor[num].cliente_dados.mes, vetor[num].cliente_dados.ano);
}

void printf_dados_banco (cliente_banco vetor[], int num)
{
    printf("\n================================= BANCO ======================\n");
    printf("BANCO:%d ",vetor[num].numero_banco);
    printf_nome_banco(vetor[num].numero_banco, 1);
    printf("AGENCIA:%d ",vetor[num].numero_agencia);
    printf_nome_agencia(vetor[num].numero_agencia, 1);
    printf("CONTA:%s ",vetor[num].numero_conta);
    printf("SENHA: %s\n",vetor[num].senha);
    printf("SALDO: R$ %.2f\n",vetor[num].saldo);
}


void printf_nome_agencia( int ag, int num)
{
    char nome_ag_banco1[6][30] = {"AGENCIA INEXIXTENTE", "CAPANEMA", "LODRINA", "CORNELIO PROCOPIO", "SAO PAULO", "SANTA LUZIA DO PARA" };
    int i;
    switch (num)
    {
        case 1:
            printf("%s\n",nome_ag_banco1[ag]);
        break;
        case 2:
            for (i = 1; i < 6; i++)
            {
                printf("[ %d ] %s\n",i, nome_ag_banco1[i]);
            }
            system("PAUSE");
        break;
    }


}

void printf_nome_banco(int banc, int num)
{
     char nome_banco[6][30] = {"BANCO INEXISTENTE", "BANCO DO BRASIL", "CAIXA ECONOMICA FEDERAL", "BRADESCO", "ITAU", "BANPARA"};
     int i;
     switch (num)
     {
        case 1:
            printf("%s\n",nome_banco[banc]);
        break;
        case 2:
            for (i=1; i<6; i++)
            {
                printf("[ %d ] %s\n",i, nome_banco[i]);
            }
            system("PAUSE");
        break;

     }

}
