#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos=0;
    int max=0;
    int arr[]={3,3,3,4,7,7,9,9,9,9};
    int count=1;
    int posFinal=0;
    printf("%d\n", sizeof(arr));
    printf("%d\n",sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int)-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count+=1;

        }
        else
        {
            if(max<count)
            {
                max=count;
                posFinal=pos;
            }
            count=1;
            pos=i+1;
        }
    }
    if(max<count)
    {
        max=count;
        posFinal=pos;
    }
    printf("max is %d elements starting at pos %d", max, posFinal);

    return 0;
}
