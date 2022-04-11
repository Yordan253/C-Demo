#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, element, k;
    int temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the k positions: ");
    scanf("%d", &k);
    int array[size];
    for(int i = 0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &element);
        array[i]=element;
    }

    while(k)
    {
        temp = array[size - 1];
        for(int i = size - 1; i > 0; i--){
            array[i] = array[i - 1];
        }
        array[0] = temp;

        k--;
    }

    printf("Array after shift operation\n");
    for(int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}
