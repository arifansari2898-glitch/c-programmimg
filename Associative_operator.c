#include <stdio.h>

int main()
{
    int A = 5;
    int B = 3;
    int C = 0;

    int result = A && B || C;

    printf("A = %d = 0101\n", A);
    printf("B = %d = 0011\n", B);
    printf("C = %d = 0000\n", C);

    printf("Result = %d\n", result);

    return 0;
}