#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array=NULL;
    int sumMalloc=0;
    int sumCalloc=0;
    int sumRealloc=0;
    array=(int*) malloc(7*sizeof(int));
    if(array==NULL)
    {
        printf("No memory");
    }
    for(int i = 0; i<7; i++)
    {
        array[i]=i;
        sumMalloc+=array[i];
    }
    printf("The sum of the array is %d !MALLOC!", sumMalloc);

    free(array);

    int numbers;
    printf("\nEnter number length: ");
    scanf("%d", &numbers);

    array = (int*)calloc(numbers, sizeof(int));
    if(array==NULL)
    {
        printf("No memory");
    }
    for(int i = 0; i<numbers; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int j = 0; j<numbers; j++)
    {
        sumCalloc+=array[j];
    }
    printf("The sum of the array is %d !CALLOC!", sumCalloc);



    int add;
    printf("\nHow many do u want to add: ");
    scanf("%d", &add);
    int *reallocArray=NULL;
    printf("Something!\n");
    reallocArray = (int*)realloc(array,add*sizeof(int));
    if(reallocArray!=NULL)
    {
        array=reallocArray;
        array[add-1]=add;
    }
    for(int i = numbers; i<add; i++)
    {
        printf("Enter element on position %d: ", i);
        scanf("%d", &reallocArray[i]);
    }

    for (int j = 0; j<add; j++)
    {
        sumRealloc+=reallocArray[j];
    }
    printf("The sum of the array is %d !REALLOC!", sumRealloc);

    free(array);
    free(reallocArray);

    return 0;
}
