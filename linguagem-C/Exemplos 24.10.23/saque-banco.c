#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    printf("Escolha sua opção:\n1: imprimir saldo \n:tirar extrato");
    printf("\n3:pagar boleto\n4:efetuar saque\n5:sair\n");
    scanf("%d", &opcao);
    while(opcao!=5)
    {
        switch(opcao)
        {
            case 1:
            printf("Imprimir saldo");
            break;
            case 2:
            printf("tirar extrato");
            break;
            case 3:
            printf("pagar boleto");
            break;
            case 4:
            printf("efetuar saque");
            break;
            default:
            printf("opção inválida");
        }
        printf("\nEscolha sua opção:\n1:imprimir saldo \n2:tirar extrato");
        printf("\n3:pagar boleto\n4:efetuar saque\n5:sair\n");
        scanf("%d", &opcao);
    }

    return 0;
}  