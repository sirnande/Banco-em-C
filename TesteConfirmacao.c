# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "dados.h"


void confirmar_deposito_cliente (cliente_banco vetor[], int deposito, int id_cliente)
{
   int menu;
   char nome_banco[6][30] = {"BANCO INEXISTENTE", "BANCO DO BRASIL", "CAIXA ECONOMICA FEDERAL", "BRADESCO", "ITAU", "BANPARA"};
    system("cls");
    printf("=========== CONFIRMACAO DE DEPOSITO ====================\n");
    printf("NOME: %s %s\n",vetor[id_cliente].cliente_dados.cliente_nome.nome, vetor[id_cliente].cliente_dados.cliente_nome.sobrenome);
    printf("CONTA: %s\n",vetor[id_cliente].numero_conta);
    printf("BANCO: %d %s\n",vetor[id_cliente].numero_banco, nome_banco[vetor[id_cliente].numero_banco]);
    printf("VALOR: R$ %d\n",deposito);
    printf("========================================================\n");
    printf("CONFIRMAR DEPOSITO\n[ 1 ] SIM\n[ 2 ] NAO\n");
    scanf("%d",&menu);
    switch (menu)
    {
        case 1:
            vetor[id_cliente].saldo = vetor[id_cliente].saldo + deposito;
            printf("DEPOSITO CONFIRMADO COM SUCESSO\n");
            system("PAUSE");
        break;
        case 2:
            printf("DEPOSITO NAO CONFIMADO!!!\n");
            system("PAUSE");
        break;
    }

}
