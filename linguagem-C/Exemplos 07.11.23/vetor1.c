#define NUM_ALUNOS 10
int main()
{
    int i, cont = 0;
    float nota[NUM_ALUNOS];
    float media, soma = 0;
    for (i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Digite um nota: ");
        scanf("%f", &nota[i]);
        soma += nota[i];
    }
    
    media = soma / NUM_ALUNOS;
    for (i = 0; i < NUM_ALUNOS; i++)
    {
        if(nota[i] > media) cont++;
    }
    
    printf("Media = %f", media);
    printf("%d notas acima", cont);

    return 0;
}
