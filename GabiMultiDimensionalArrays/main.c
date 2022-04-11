#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

//void swap_rows(int arr[ROWS][COLS],int rowA, int rowB);
//
//int main()
//{
//
//    int multiArray[ROWS][COLS];
//    int min = INT_MAX;
//    int max = INT_MIN;
//    int minRow;
//    int maxRow;
//
//    for (int i = 0; i<ROWS; i++)
//    {
//        for(int j = 0; j<COLS; j++)
//        {
//            scanf("%d",&multiArray[i][j]);
//            if(multiArray[i][j]<min)
//            {
//                min = multiArray[i][j];
//                minRow = i;
//            }
//
//            if(multiArray[i][j]>max)
//            {
//                max=multiArray[i][j];
//                maxRow = i;
//            }
//
//        }
//    }
//
//    swap_rows(multiArray, minRow, maxRow);
//
//    for (int i = 0; i < ROWS; i++)
//    {
//        for (int j = 0; j < COLS; j++)
//        {
//            printf("%d ", multiArray[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
//void swap_rows(int arr[ROWS][COLS], int rowA, int rowB)
//{
//    int temp = 0;
//    for (int i = 0; i < COLS; i++)
//    {
//        temp = arr[rowA][i];
//        arr[rowA][i] = arr[rowB][i];
//        arr[rowB][i] = temp;
//    }
//}

//int main()
//{
//    int multiArray[ROWS][COLS];
//    int check=1;
//    for(int i = 0; i<ROWS; i++)
//    {
//        for(int j = 0; j<COLS; j++)
//        {
//            printf("Position %d|%d: ", i,j);
//            scanf("%d", &multiArray[i][j]);
//        }
//    }
//
//    for(int i = 0; i<ROWS; i++)
//    {
//        for(int j = 0; j<COLS-1; j++)
//        {
//            if(multiArray[i][j]<multiArray[i][j+1])
//            {
//                check=1;
//            }
//            else
//            {
//                printf("The conditions are not fulfilled!");
//                return 0;
//            }
//        }
//    }
//
//    for(int i = 0; i<COLS; i++)
//    {
//        for(int j = 0; j<ROWS-1; j++)
//        {
//            if(multiArray[j][i]>multiArray[j+1][i])
//            {
//                check=1;
//            }
//            else
//            {
//                printf("The conditions are not fulfilled!");
//                return 0;
//            }
//        }
//    }
//
//    if(check == 1)
//    {
//        printf("The conditions are fulfilled!");
//    }

//    return 0;
//}

void print(int *arr, int size)
{
    for(int i = 0; i<=size; i++)
    {
        printf("Index %d: %d \n",i,arr[i]);
    }
}



int main()
{
    int size,min;
    int *arr=NULL;
    int operation;
    printf("Enter array size: ");
    scanf("%d", &size);
    arr = (int *)malloc(size*sizeof(int));
    int *ptr=NULL;
    ptr=arr;

    for(int i = 0; i<size; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter number 1-add, 2-delete, 3-smallest: ");
    scanf("%d", &operation);
    switch(operation)
    {
        case 1:
            size+=1;
            arr = (int*) malloc (size*4);
            for(int i = 0; i<size;i++)
            {
                arr[i]=ptr[i];
            }
            for(int i = --size; i>=size;i--)
            {
                printf("Enter %d element: ", i);//not adding the element on the last index???
                scanf("%d", &arr[i]);

            }

            print(arr,size);

            break;

        case 2:
            arr = (int*) malloc (--size*4);
            for(int i = 0; i<size;i++) //on the last index the value is set to 0???
            {
                arr[i]=ptr[i];
            }
            print(arr,size-1);
            break;

        case 3:
            min= INT_MAX;
            arr = (int*) malloc (size*4);
            for(int i = 0; i<size;i++)
            {
                arr[i]=ptr[i];
            }
            for(int i =0; i<size;i++)
            {
                min=arr[0];

                if(arr[i]<arr[i+1])
                {
                    min=arr[i];
                }
            }
            printf("The min value is: %d\n",min);
            break;
    }

    for(int i =0; i<size; i++)
    {
       // printf("Index %d: %d \n",i,arr[i]);
    }
    free(arr);
    free(ptr);
    return 0;
}

//int main()
//{
//    int multiArray[ROWS][COLS];
//    for(int i = 0; i<ROWS; i++)
//    {
//        for(int j = 0; j<COLS; j++)
//        {
//            printf("Position %d|%d: ", i,j);
//            scanf("%d", &multiArray[i][j]);
//        }
//    }
//
//    for(int i = 1; i<ROWS-1;i++)
//    {
//        for(int j =1 ;j<COLS-1; j++)
//        {
//            printf("Position %d|%d: %d\n", i,j,multiArray[i][j]);
//
//        }
//    }
//
//    return 0;
//}
