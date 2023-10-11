// valor de custo e venda

int main()
{
    float custo, acrescimo, venda, valor;
    printf("Digite o preço de custo: ");
    scanf("%f", &custo);
    printf("Qual é o percentual de acréscimo em decimal: ");
    scanf("%f", &acrescimo);
    valor = custo*acrescimo;
    venda = custo+valor;
    printf("O valor da venda deve ser de: %f", venda);
    
    return 0;
}
