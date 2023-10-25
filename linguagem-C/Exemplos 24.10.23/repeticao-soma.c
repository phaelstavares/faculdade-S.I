#include <stdio.h>
int main()
{
    int num, soma;
    soma = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    while(num!=0)
    {
        soma = soma + num;
        printf("\n Soma parcial: %d, soma");
        printf("\n Digite um número inteiror: ");
        scanf("%d", &num);
    }
        printf("\n Soma total: %d", soma);

    return 0;
}  