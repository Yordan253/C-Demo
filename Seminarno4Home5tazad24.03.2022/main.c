#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n,k,element;
    int prom=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the position of the element: ");
    scanf("%d", &k);
    int array[n];
    for(int i = 0; i<n; i++){
        printf("Enter element: ");
        scanf("%d", &element);
        array[i]=element;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
           if(array[i] > array[j]) {
               prom = array[i];
               array[i] = array[j];
               array[j] = prom;
           }
        }
    }


    while(k>n)
    {
        printf("Please re-enter k it must be in the size of the array: ");
        scanf("%d", &k);

    }
    printf("The element on position %d is: %d",k,array[k]);
    return 0;
}
