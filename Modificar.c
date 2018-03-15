# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "dados.h"

void alterar_conta_cliente (cliente_banco vetor[], int num)
{
    int i;
    do
    {
        system("cls");
        printf("\n===================== ALTERACAO DADOS BANCARIOS ===================\n");
        printf("DESEJA FAZER OUTRA OPERACAO \n");
        printf("[ 1 ] CONTA \n[ 2 ] SENHA \n[ 3 ] NUMERO DO BANCO \n[ 4 ] NUMERO DA AGENCIA \n[ 0 ] SAIR\n");
        scanf("%d",&i);
        switch (i)
        {
            case 1:
                system("cls");
                printf("NUMERO DA CONTA COM 4 DIGITO: ");
                do
                {
                    fflush(stdin);
                    scanf("%[^\n]s",&vetor[num].numero_conta);
                }while(vetor[num].numero_conta[2] == NULL  || vetor[num].numero_conta[3] == NULL || vetor[num].numero_conta[4] != NULL);
                printf("DADOS ALTERADO COM SUCESSO !!!\n");
                system("PAUSE");
            break;

            case 2:
                system("cls");
                printf("SENHA 4 DIGITO: ");
                do
                {
                    fflush(stdin);
                    scanf("%[^\n]s",&vetor[num].senha);
                }while (vetor[num].senha[2] == NULL || vetor[num].senha[3] == NULL || vetor[num].senha[4] != NULL );
                printf("DADOS ALTERADO COM SUCESSO !!!\n");
                system("PAUSE");
            break;

            case 3:
                system("cls");
                printf("NUMERO DO BANCO: ");
                scanf("%d",&vetor[num].numero_banco);
                printf("DADOS ALTERADO COM SUCESSO !!!\n");
                system("PAUSE");
            break;

            case 4:
                system("cls");
                printf("NUMERO DA AGENCIA: ");
                scanf("%d",&vetor[num].numero_agencia);
                printf("DADOS ALTERADO COM SUCESSO !!!\n");
                system("PAUSE");
            break;
        }
    }while (i != 0);
}
