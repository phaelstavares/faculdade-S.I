// variável A e B

int main()
{
    float a, b, x1, x2;
    printf("Digite a variável A: ");
    scanf("%f", &a);
    printf("Digite a variável B: ");
    scanf("%f", &b);
    x1 = a;
    x2 = b;
    a = x2;
    b = x1;
    
    printf("O valor de A é: %f", a);
    printf("O valo de B é: %f", b);
    
    return 0;
}
