// média de notas

int main()
{
    float n1, n2, n3, media;
    printf("Digite a nota um: ");
    scanf("%f", &n1);
    printf("Digite a nota dois: ");
    scanf("%f", &n2);
    printf("Digite a nota três: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) /3;
    printf("A média das notas é: %f" , media);
    return 0;
    
}