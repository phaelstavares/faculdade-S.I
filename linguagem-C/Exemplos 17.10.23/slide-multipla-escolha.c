#include <stdio.h>

int main()
{
    int epoca;
    printf("Digite o número do trimestre: ");
    scanf("%d", &epoca);
    switch (epoca)
    {
        case 1: printf("Verão");
        break;
        case 2: printf("Outono");
        break;
        case 3: printf("Inverno");
        break;
        case 4: printf("Primavera");
        break;
        default: printf("Trimestre invalido.");
    }

    return 0;
}
