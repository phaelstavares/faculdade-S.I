// temperatura

int main()
{
    float grau, f;
    printf("Digite uma temperatura em celsius: ");
    scanf("%f", &grau);
    f = (9 * grau + 160)/5;
    printf("A temperatura %f", grau);
    printf(" , em graus Fehreinheit é: %f", f);
    
    return 0;
}
