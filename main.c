# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include "dados.h"

int main ()
{
    cliente_banco vetor[10];
    int cont, menu, menu1, menu2, n, quant=0, quant1=0, guard=0, aux, aux1, aux2, contconf = 0, confirmacao[12][3], i,j;
    float saque, deposito;
    char senha1[5] ;
    for(i=0;i<12;i++)
    {
        confirmacao[i][0] = -1;
    }
    do
    {
        system("cls");
        printf("==========  BANCO INTERNACIONAL  ===========\n");
        printf("[ 1 ]  ACESSO PELO BANCO\n");
        printf("[ 2 ]  ACESSO PELO CLIENTE\n");
        printf("[ 0 ]  SAIR\n");
        scanf("%d",&menu1);
        switch (menu1)
        {
            case 0:
                printf("DESEJA SAIR\n[ 0 ] SIM\n[ 6 ] NAO\n");
                scanf("%d",&menu1);
            break;

            case 1:
                menu = 13;
                    do
                    {
                        system ("cls");
                        printf("================= MENU =========================\n");
                        printf("LOGADO Data :%s Hora:%s\n",__DATE__,__TIME__);
                        printf("[ 1 ] CADASTRAR CLIENTE\n");
                        printf("[ 2 ] CONSULTAR CLIENTE\n");
                        printf("[ 3 ] CONSULTA CONTA PELA CONTA\n");
                        printf("[ 4 ] CONSULTAR CLIENTE PELO NOME\n");
                        printf("[ 5 ] ALTERAR CADASTRO DO CLIENTE\n");
                        printf("[ 6 ] BANCOS CADASTRADOS\n");
                        printf("[ 7 ] AGENCIAS CADASTRADAS\n");
                        printf("[ 8 ] EXCLUIR CONTA\n");
                        printf("[ 9 ] CONFIRMAR DEPOSITO\n");
                        printf("[ 0 ] SAIR\n");
                        scanf("%d",&menu);
                        switch (menu)
                            {
                                case 1:
                                    system("cls");
                                    printf("QUANTOS CLIENTES DESEJA CADASTRAR: ");
                                    scanf("%d",&quant);
                                    quant1 = quant;
                                    if (quant <= guard)
                                        {
                                            quant = quant + quant1 + (guard - 1);
                                        }
                                    for (n=guard; n<quant; n++)
                                        {
                                            printf("================= Cadastro de Cliente ================\n");
                                            system("cls");
                                            receber_nome_cliente (vetor, n);
                                            receber_dados_cliente (vetor, n);
                                            receber_dados_banco (vetor, n);
                                            guard = n+1;

                                            printf("\n");
                                            printf("CADASTRO REALIZADO COM SUCESSO\n");
                                            system("PAUSE");
                                            system("cls");
                                        }

                                    printf("CONTA CADASTRADA COM SUCESSO!!!\n");
                                    system("PAUSE");
                                break;
                                case 2:
                                    if (quant == 0)
                                        {
                                            printf("!!! NAO TEM CLIENTE CADASTRADO !!!\n");
                                        }
                                        else
                                        {
                                            system("cls");
                                            printf("DIGITE O NUMERO DO CLIENTE: ");
                                            scanf("%d",&cont);
                                            if (vetor[cont].cliente_dados.cpf == NULL || vetor[cont].numero_banco == NULL)
                                            {
                                               printf("!!! NAO TEM CLIENTE CADASTRADO !!!\n");
                                            }
                                            else
                                            {
                                                printf_nome_cliente ( vetor, cont);
                                                printf_dados_cliente ( vetor, cont);
                                                printf_dados_banco ( vetor, cont);
                                            }
                                        }
                                    system("PAUSE");
                                break;
                                case 3:
                                    system("cls");
                                    n = verificar_cliente_conta(vetor, quant);
                                    if (n == -1)
                                        {
                                            printf("!!! CLIENTE NAO ENCONTRADO !!!\n");
                                        }
                                        else
                                        {
                                            printf_nome_cliente ( vetor,n);
                                            printf_dados_cliente ( vetor, n);
                                            printf_dados_banco ( vetor, n);
                                            printf("\n!!! CLIENTE ENCONTRADO !!!\n");
                                        }
                                    system("PAUSE");
                                break;

                                case 4:
                                    system("cls");
                                    n = verificar_cliente(vetor, quant);
                                    if (n == -1)
                                        {
                                            printf("!!! CLIENTE NÂO ENCONTRADO !!!\n");
                                        }
                                        else
                                        {
                                            printf_nome_cliente ( vetor, n);
                                            printf_dados_cliente ( vetor, n);
                                            printf_dados_banco ( vetor, n);
                                        }
                                    system("PAUSE");
                                break;
                                case 5:
                                    do
                                    {
                                        system("cls");
                                        printf("============= ALTERAR CADASTRO ============\n");
                                        printf("DIGITE OS DADOS ABAIXO PARA ALTERAR\n");
                                        printf("[ 1 ] ALTERAR NOME E SOBRENOME\n");
                                        printf("[ 2 ] ALTERAR DADOS DO CLIENTE\n");
                                        printf("[ 3 ] ALTERAR DADSO BACARIO DO CLIENTE\n");
                                        printf("[ 0 ] SAIR\n");
                                        scanf("%d",&menu2);
                                        aux2 = verificar_cliente_conta(vetor, quant);
                                        switch (menu2)
                                        {
                                            case 1:
                                                receber_nome_cliente (vetor, aux2);
                                                printf("DADOS ALTERADO COM SUCESSO\n");
                                                system("PAUSE");
                                            break;
                                            case 2:
                                                receber_dados_cliente (vetor, aux2);
                                                printf("DADOS ALTERADO COM SUCESSO\n");
                                                system("PAUSE");
                                            break;
                                            case 3:
                                                alterar_conta_cliente (vetor, aux2);
                                                printf("DADOS ALTERADO COM SUCESSO\n");
                                                system("PAUSE");
                                            break;
                                        }

                                    }while (menu2 != 0);
                                    system("PAUSE");
                                break;
                                case 6:
                                    system("cls");
                                    printf("============= BANCOS CADASTRADOS ==========\n");
                                    printf_nome_banco(2, 2);
                                    system("PAUSE");
                                break;
                                case 7:
                                    system("cls");
                                    printf_nome_agencia(2,2);
                                    system("PAUSE");
                                break;

                                case 8:
                                    system("cls");
                                    printf("===================  EXCLUIR CONTA ===========\n");
                                    printf("DIGITE A CONTA QUE DESEJA EXCLUIR \n");
                                    aux = verificar_cliente_conta(vetor, quant);
                                    printf_nome_cliente ( vetor, aux);
                                    printf_dados_cliente ( vetor, aux);
                                    printf_dados_banco ( vetor, aux);
                                    printf("\nDESEJA EXCLUIR ESSA CONTA\n[ 1 ] SIM\n[ 2 ] NAO\n");
                                    scanf("%d",&aux1);
                                    if ( aux1 == 1)
                                    {
                                        excluir_conta_cliente (vetor, aux);
                                        printf("CONTA EXCLUIDA COM SUCESSO!! \n");
                                        system("PAUSE");
                                    }
                                    system("PAUSE");
                                break;
                                case 9:
                                    for(i =0; i<12;i++)
                                    {
                                        for (j = 0; j<1; j++)
                                        {
                                        //    printf("confimacao[ %d ][ %d ] = %d\n",i,j,confirmacao[i][j]);
                                            if (confirmacao[i][j] != -1)
                                            {
                                                aux = confirmacao[i][j];
                                                deposito = confirmacao[i][1];
                                                confirmar_deposito_cliente (vetor, deposito, aux);
                                                confirmacao[i][j] = -1;
                                            }
                                        }
                                    }
                                    system("PAUSE");

                                break;
                           }
                    }while (menu != 0);

            break;
            case 2:
                system("cls");

                    aux = verificar_cliente_conta(vetor, quant);
                    aux1 = verificar_cliente_senha(vetor, quant);
                    if (aux == aux1 && aux != -1 && aux1 != -1)
                    {
                        do
                        {
                            system("cls");
                            printf("=============  %s   ==================\n",printf_nome_banco(vetor[aux].numero_banco, 1));
                            printf("LOGADO Data :%s Hora:%s\n",__DATE__,__TIME__);
                            printf("OLA, %s  O QUE DESEJA FAZER\n",vetor[aux].cliente_dados.cliente_nome.nome);
                            printf("[ 1 ] DEPOSITO\n");
                            printf("[ 2 ] SACAR\n");
                            printf("[ 3 ] CONSULTAR SALDO\n");
                            printf("[ 4 ] TRANSFERENCIA\n");
                            printf("[ 0 ] SAIR\n");
                            scanf("%d",&menu);
                            switch (menu)
                            {
                                case 1:
                                    system("cls");
                                    printf("=============  %s   ==================\n",printf_nome_banco(vetor[aux].numero_banco, 1));
                                    printf("LOGADO Data :%s Hora:%s\n",__DATE__,__TIME__);
                                    printf("===============  DEPOSITO  ===========\n");
                                    printf("DIGITE O VALOR DO DEPOSITO\n");
                                    scanf("%f",&deposito);
                                    confirmacao[contconf][0] = aux;
                                //    printf("confimacao[ %d ][ 0 ] = %d\n",contconf,confirmacao[contconf][0]);
                                    confirmacao[contconf][1] = deposito;
                                 //   printf("confimacao[ %d ][ 0 ] = %d\n",contconf,confirmacao[contconf][1]);
                                   // vetor[aux].saldo = vetor[aux].saldo + deposito;
                                    contconf++;
                                    printf("DEPOSITO REALIZADO COM SUCESSO\n");
                                    system("PAUSE");
                                break;
                                case 2:
                                    system("cls");
                                    printf("=============  %s   ==================\n",printf_nome_banco(vetor[aux].numero_banco, 1));
                                    printf("LOGADO Data :%s Hora:%s\n",__DATE__,__TIME__);
                                    printf("===============  SAQUE  ==================\n");
                                    printf("DIGITE O VALOR DO SAQUE\n");
                                    scanf("%f",&saque);
                                    if (saque > vetor[aux].saldo)
                                    {
                                        printf("!!! VALOR INDISPONIVEL PARA SUA CONTA !!!\n");
                                    }
                                    else
                                    {
                                        vetor[aux].saldo = vetor[aux].saldo - saque;
                                        printf("SAQUE REALIZADO COM SUCESSO!!!\n");
                                    }
                                system("PAUSE");

                                break;
                                case 3:
                                    printf("===================  SALDO  ============\n");
                                    printf("LOGADO Data :%s Hora:%s\n",__DATE__,__TIME__);
                                    printf("OLA, %s O SEU SALDO E DE\n",vetor[aux].cliente_dados.cliente_nome.nome);
                                    printf("R$ %.2f\n",vetor[aux].saldo);
                                    system("PAUSE");
                                break;
                                case 4:
                                    system("cls");
                                    printf("=============  %s   ==================\n",printf_nome_banco(vetor[aux].numero_banco, 1));
                                    printf("LOGADO Data :%s Hora:%s\n",__DATE__,__TIME__);
                                    printf("==================== TRANSFERENCIA =========\n");
                                    printf("OLA, %s DIGITE OS DADOS ABAIXO PARA A TRANFERENCIA\n",vetor[aux].cliente_dados.cliente_nome.nome);
                                    aux2 = verificar_cliente_banco(vetor, quant);
                                    printf(" %s\n",printf_nome_banco(vetor[aux2].numero_banco, 1));
                                    n = verificar_cliente_agencia(vetor, quant);
                                    aux1 = verificar_cliente_conta(vetor, quant);
                                    if (n == aux2 && n == aux1 && n != -1 && aux2 != -1 && aux1 != -1)
                                    {
                                        printf("DIGITE O VALOR: ");
                                        scanf("%f",&deposito);
                                        if (deposito > vetor[aux].saldo)
                                        {
                                            printf("SEU SALDO E POUCO PARA ESSA TRANSFERENCIA\n");
                                        }
                                        else
                                        {
                                            vetor[n].saldo = vetor[n].saldo + deposito;
                                            vetor[aux].saldo = vetor[aux].saldo - deposito;
                                            system("cls");
                                            printf("=============  %s   ==================\n",printf_nome_banco(vetor[aux].numero_banco, 1));
                                            printf("LOGADO Data :%s Hora:%s\n",__DATE__,__TIME__);
                                            printf("==================== TRANSFERENCIA =========\n");
                                            printf("DE: %s %s\n",vetor[aux].cliente_dados.cliente_nome.nome, vetor[aux].cliente_dados.cliente_nome.sobrenome);
                                            printf("AGENCIA: %d    ",vetor[aux].numero_agencia);
                                            printf_nome_agencia(vetor[aux].numero_agencia, 1);
                                            printf("============================================\n");
                                            printf("PARA: %s %s\n",vetor[n].cliente_dados.cliente_nome.nome, vetor[n].cliente_dados.cliente_nome.sobrenome);
                                            printf("CONTA: %s\n",vetor[n].numero_conta);
                                            printf("AGENCIA: %d  ",vetor[n].numero_agencia);
                                            printf_nome_agencia(vetor[n].numero_agencia, 1);
                                            printf("BANCO: %d    ",vetor[n].numero_banco);
                                            printf_nome_banco(vetor[n].numero_banco, 1);
                                            printf("TRANSFERENCIA REALIZADA COM SUCESSO !!!\n");
                                        }

                                    }
                                    else
                                    {
                                        printf("!!! ERRO !!! DADOS INCORRETOS !!!\n");
                                    }

                                    system("PAUSE");
                                break;

                            }
                        }while (menu != 0);
                    }
                    else
                    {
                        printf("!!! DADOS INCORRETOS !!!\n");
                    }

                system("PAUSE");
            break;

        }

    }while (menu1 != 0);


    return 0;
}




