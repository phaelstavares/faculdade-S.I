#include <stdio.h>

int main()
{
    int num, i, divisor;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    divisor = 0;
    for( i = 2; i < num; i = i + 1)
        if (num % i == 0)
        {
            divisor = i;
            i = num;
        }
        
    if (divisor !=0)
        printf("%d é divisor próprio de %d \n", divisor, num);
    else
        printf("%d não tem divisores próprios \n", num);

    return 0;
}