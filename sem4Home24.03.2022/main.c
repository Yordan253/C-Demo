#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,element,j,k;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    int reversedArray[size];
    for(int i = 0; i<size; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d", &element);
        array[i]=element;
    }

    for(j = size-1, k = 0; k<size;j--, k++){
        reversedArray[j]=array[k];
    }

    for(int p = 0; p<size; p++){
        printf("Element %d value: %d\n",p+1,reversedArray[p]);
    }
    return 0;
}
