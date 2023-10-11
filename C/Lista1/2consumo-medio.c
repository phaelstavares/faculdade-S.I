// consumo médio

int main()
{
    float dista, combus, consumo;
    printf("Digite a distância em metros: ");
    scanf("%f", &dista);
    printf("Digite o consumo de combustível: ");
    scanf("%f", &combus);
    consumo = dista/combus;
    printf("O consumo médio de seu veículo é: %f", consumo);
    
    return 0;
    
}