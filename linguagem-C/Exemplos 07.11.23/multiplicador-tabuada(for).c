#include <stdio.h>

int main()
{
    int i, tab, limite;
    printf("Tabuada de: ");
    scanf("%d", &tab);
    printf("e o ultimo multiplicador: ");
    scanf("%d", &limite);
    printf("\n Tabuada de &d: ", tab);
    for( i=1; i<=limite; i++)
    {
        printf("\n %2d x %2d = %2d", tab, i, i*tab);
    }

    return 0;
}