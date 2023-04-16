#include <stdio.h>

int main() {
  float salario_bruto, prestacao;

  printf("Digite o valor do salário bruto: ");
  scanf("%f", &salario_bruto);

  printf("Digite o valor da prestação: ");
  scanf("%f", &prestacao);

  if (prestacao <= salario_bruto * 0.3) {
    printf("Empréstimo concedido.\n");
  } else {
    printf("Empréstimo não concedido.\n");
  }

  return 0;
}
