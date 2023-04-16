#include <stdio.h>



int main() {
    float fah, cel;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fah);

    cel = 5 * (fah - 32) / 9;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius.\n", fah, cel);

    return 0;
}
