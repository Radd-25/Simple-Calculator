#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, hasil;
    char aritmatika;

    printf("Calc v1.1\n");

    printf("input one : ");
    scanf("%f", &a);

    printf("Oprator (+,-,*,/) : ");
    scanf(" %c", &aritmatika);

    printf("input two : ");
    scanf("%f", &b);

    printf("is true? : \n");
    printf("%.2f %c %.2f\n", a, aritmatika, b);

    switch (aritmatika) {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            if (b != 0) {
                hasil = a / b;
            } else {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("sys_error\n");
            return 1;
    }

    printf("result : \n");
    printf("%.2f\n", hasil);

    return 0;
}