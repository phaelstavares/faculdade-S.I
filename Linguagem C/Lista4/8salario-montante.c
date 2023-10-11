// parcelas

int main()
{
    float salario, montante, total;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    montante = salario * 0.007;
    total = montante + salario;
    printf("O valor total que você receberá é: %f", total);
    
    return 0;
}
