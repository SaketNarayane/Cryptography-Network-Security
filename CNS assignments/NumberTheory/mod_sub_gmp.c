/*
 *  Modular arithmetic Subtraction
 *
 */

/**
 * (a-b)%n = (a%n - b%n)%n
 */

#include <gmp.h>
#include <stdio.h>


int main() {
    mpz_t a, b, n, x, y;
    mpz_inits(a, b, n, x, y, (mpz_ptr)NULL);
    printf("Enter Both Numbers\n");
    gmp_scanf("%Zd %Zd", a, b);
    printf("Enter number to get modulo with: ");
    gmp_scanf("%Zd", n);
    mpz_mod(x, a, n);
    mpz_mod(y, b, n);
    mpz_sub(x, x, y);
    mpz_mod(x, x, n);
    gmp_printf("(%Zd - %Zd) mod %Zd = %Zd\n", a, b, n, x);
    return 0;
}
