//FUNCTION TO FIND FACTORIAL OF A NUMBER.
#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    while (n > 0)
    {
        fact = fact * n;
        n--;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));

    return 0;
}
