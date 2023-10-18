#include <stdio.h>

int main()
{
    int numImpressoes, impressoesJaRealizadas;
    
    printf("Quantas vezes a impressão deve ser feita? ");
    scanf("%d", &numImpressoes);
    
    impressoesJaRealizadas = 0;
    
    while (impressoesJaRealizadas < numImpressoes)
    {
        printf("Faça o teste de mesa dos exercícios \n");
        impressoesJaRealizadas++; 
    }
    return 0;
}
