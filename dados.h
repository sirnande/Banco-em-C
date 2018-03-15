#ifndef DADOS_H
#define DADOS_H

struct usuario
{
    char nome[10], sobrenome[20];

}typedef nome;

struct dado
{
    nome cliente_nome;
    char rua[20], bairro[20], cidade[20], estado[20];
    int cpf, rg, dia, mes, ano;

}typedef dados;

struct banco
{
    dados cliente_dados;
    int numero_banco, numero_agencia;
    float saldo;
    char senha[5],  numero_conta[5];

}typedef cliente_banco;

#endif // DADOS_H
