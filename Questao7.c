#include <stdio.h>

int main() {
  float salario_bruto, prestacao;

  printf("Digite o valor do sal�rio bruto: ");
  scanf("%f", &salario_bruto);

  printf("Digite o valor da presta��o: ");
  scanf("%f", &prestacao);

  if (prestacao <= salario_bruto * 0.3) {
    printf("Empr�stimo concedido.\n");
  } else {
    printf("Empr�stimo n�o concedido.\n");
  }

  return 0;
}
