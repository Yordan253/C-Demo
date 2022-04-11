#include <stdio.h>
#include <stdlib.h>


void threeConsecutiveOdds(int* arr, int arrSize){


    for(int i = 0; i<arrSize-2; i++)
    {
        if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1)
        {
            printf("There are 3 consecutive odds!");
            exit(0);
        }
    }
    printf("No");

}

int main()
{
    int size;
    printf("Arr size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i =0; i<size;i++)
    {
        printf("On index %d: ",i);
        scanf("%d", &arr[i]);
    }

    threeConsecutiveOdds(arr,size);

//    for(int i = 0; i<size; i++)
//    {
//        if(arr[i]%2==1 && arr[i+1]%2==1 &&arr[i+2]%2==1)
//        {
//            printf("There are 3 consecutive odds!");
//            exit(0);
//        }
//    }

    return 0;
}
