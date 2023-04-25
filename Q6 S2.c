#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

int main() {
    struct Complex a, b, c;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &a.real, &a.imag);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &b.real, &b.imag);

    c = add(a, b);
    printf("Sum = %.2f + %.2fi\n", c.real, c.imag);

    c = sub(a, b);
    printf("Difference = %.2f + %.2fi\n", c.real, c.imag);

    return 0;
}
