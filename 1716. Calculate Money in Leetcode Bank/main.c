#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    printf("Enter days: ");
    scanf("%d", &days);
    int collectedCash=0;
    int weeks=0,j=0;

    while(days!=0)
    {
        if(days>=7)
        {
            if(weeks==0)
            {
                for(int i = 1; i<=7; i++)
                {
                    collectedCash+=i;
                }
            }

            if(weeks!=0)
            {
                for(j = weeks+1; j<=7+weeks;j++)
                {
                    collectedCash+=j;
                }

            }

            weeks++;
            days-=7;

        }
        else
        {

            for(int i = weeks+1; i<=days+weeks;i++)
            {
                collectedCash+=i;
            }
            days=0;

        }
    }
    printf("%d",collectedCash);
    return 0;
}
