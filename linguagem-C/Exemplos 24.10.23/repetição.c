#include <stdio.h>

int main()
{
    int num, quad;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    while(num != 0)
    {
        quad = num * num;
        printf("\n Digite de %d: %d", num, quad);
        printf("\n Digite um número inteiro: ");
        scanf("%d", &num);
        
    }

    return 0;
}
