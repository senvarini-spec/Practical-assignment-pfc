//FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME
#include <stdio.h>
     
int isPalindrome(int n)
{
    int rev = 0, temp = n;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (temp == rev)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}
                                      
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
