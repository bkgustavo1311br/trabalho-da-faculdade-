#include <stdio.h>

int main() {
    float diagonalMaior, diagonalMenor, area;

    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);

    area = diagonalMaior * diagonalMenor / 2;

    printf("A area do losango e: %.2f\n", area);

    return 0;
}
