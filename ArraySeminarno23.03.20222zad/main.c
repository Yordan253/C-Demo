#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;
    int n;
    int check = 1;
    printf("Enter array size: ");
    scanf("%d", &num);
    int arrayNums[num];

    for(int i = 0; i<num;i++)
    {
        printf("Enter num: ");
        scanf("%d", &n);
        arrayNums[i]=n;
    }

    for(int j=0;j<num;j++)
    {
        printf("On position %d the num is %d\n",j,arrayNums[j]);
    }
    for(int k = 1; k<num;k++)
    {
        if(k%2==0)
        {
            if(arrayNums[k]>arrayNums[k-1])
            {
                check=0;
            }
        }
        else
        {
            if(arrayNums[k]<arrayNums[k-1])
            {
                check=0;
            }
        }

    }
    if (check == 1)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

    return 0;
}
