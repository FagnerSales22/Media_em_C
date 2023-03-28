#include <stdio.h>

int main() {
  char nome[30];
  float nota_AV1, nota_AV2, media;

  printf("Insira o nome do Aluno: ");
  scanf("%s", nome);
  printf("Insira a nota Av1: ");
  scanf("%f", &nota_AV1);
  printf("Insira a nota Av2: ");
  scanf("%f", &nota_AV2);
  
  media = (nota_AV1 + nota_AV2) / 2;

 if( media >= 6 ){
    printf("\nO aluno %s está Aprovado(a)! \n", nome);
  }else
    printf("\nO aluno %s está Reprovado(a)! \n", nome);
    printf("Sua media foi de %.2f", media);

  return 0;
}