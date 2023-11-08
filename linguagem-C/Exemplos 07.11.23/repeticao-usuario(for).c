#include <stdio.h>

int main()
{
    int i, inicio, fim;
    printf("Digite o menor número: ");
    scanf("%d", &inicio);
    printf("Digite o maior número: ");
    scanf("%d", &fim);
    printf("\n Intervalo: ");
    for( i=inicio; i<=fim; i++)
    {
        printf("%d", i);
    }

    return 0;
}
