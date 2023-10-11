// veículo

int main()
{
    float fabrica, porcentagem, impostos, venda;
    printf("Qual o preço de fábrica? ");
    scanf("%f", &fabrica);
    impostos = (0.28 * fabrica);
    porcentagem = (0.45 * fabrica);
    venda = porcentagem + impostos + fabrica;
    printf("O valor do veículo é de: %f", venda);
    
    return 0;
}
