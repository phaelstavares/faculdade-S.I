programa {
  funcao inicio() {
    real num1, num2, soma, media

    escreva("Digite a primeira nota: ")
    leia(num1)

    escreva("Digite a segunda nota: ")
    leia(num2)

    soma = num1+num2
    media = soma/2

    se(media>=7){escreva("O aluno foi Aprovado com ", media , " de média.")}
    senao{escreva("O aluno foi Reprovado com ", media , " de média.")}

  }
}