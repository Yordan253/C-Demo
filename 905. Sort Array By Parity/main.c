#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,temp, index=0;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int  i = 0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            temp=arr[index];
            arr[index++]=arr[i];
            arr[i]=temp;
        }
    }

    for(int i = 0; i<size; i++)
    {
        printf("indx %d: %d\n",i,arr[i]);
    }
    return 0;
}
