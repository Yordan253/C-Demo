#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int array[5][5] = {
    {3, 5, 6, 11, 13},
    {7, 4, 18, 29, 38},
    {9, 2, 15, 20, 12},
    {10, 55, 1, 12, 49},
    {39, 17, 4, 3, 16}
    };
    printf("\nFirst diagonal\n\n");
    for (i = 0;i<5;i++)
    {
        printf("array[%d][%d] is %d\n",i,i,array[i][i]);
    }
    printf("\nSecondary diagonal\n\n");
    for(i = 0; i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if ((i + j) == 5-1)
            {
                printf("array[%d][%d] is %d\n",i,j,array[i][j]);
            }
        }
    }
    printf("\nAbove first diagonal\n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<j)
            {
                printf("array[%d][%d] is %d\n",i,j,array[i][j]);
            }
        }
    }


    printf("\nUnder first diagonal\n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i>j)
            {
                printf("array[%d][%d] is %d\n",i,j,array[i][j]);
            }
        }
    }


    return 0;
}
