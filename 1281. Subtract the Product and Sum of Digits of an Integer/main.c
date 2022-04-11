#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp,multiplication = 1, sum = 0, result=0;
    printf("Enter n: ");
    scanf("%d", &n);
    while(n!=0)
    {
        temp=n%10;
        sum+=temp;
        multiplication*=temp;
        n/=10;
    }
    result = multiplication-sum;
    printf("The result is : %d", result);

    return 0;
}
