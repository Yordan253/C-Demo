#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reversed = 0, original, remainder;
    scanf("%d", &n);
    original = n;

    while(n!=0)
    {
        remainder =n % 10;
        reversed=reversed*10+remainder;
        n/=10;
    }

    if(original == reversed)
    {
        printf("The number %d is palindrome.", original);
    }
    else
    {
        printf("The number %d is not palindrome.", original);
    }
    return 0;
}
