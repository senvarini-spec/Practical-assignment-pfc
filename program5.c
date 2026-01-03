//FUNCTION TO REVERSE A NUMBER 
#include <stdio.h>
int main() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        int lastDigit = n % 10;  
        rev = rev * 10 + lastDigit;
        n = n / 10;  
    }
    printf("Reversed number = %d", rev);
   return 0;
}

