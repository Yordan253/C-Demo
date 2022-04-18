#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double chair = 13.99;
    double table = 42.00;
    double cups = 5.98;
    double dishes = 21.02;
    double sum = 0;

    int tableCount = 0;
    int chairCount = 0;
    int cupsCount = 0;
    int dishesCount = 0;

    int guests;
    printf("Enter number of guests: ");
    scanf("%d",&guests);

    char items[10];
    printf("Enter items: ");
    scanf("%s", items);


    while(1){
        if(!strcmp("PARTY!", items)){
            break;
        }
        else if(!strcmp(items, "Table")){
            sum+=table;
            tableCount++;
        }
        else if(!strcmp(items, "Chair")){
            sum+=chair;
            chairCount++;
        }
        else if(!strcmp(items, "Cups")){
            sum+=cups;
            cupsCount+=6;
        }
        else if(!strcmp(items, "Dishes")){
            sum+=dishes;
            dishesCount+=6;
        }
        gets(items);
        printf("Enter items: ");
    }

    printf("Sum is : %.2f\n", sum);
    if(tableCount<guests){
        printf("%d Tables\n", 1+(guests-tableCount)/8);
    }
    if(chairCount<guests){
        printf("%d Chairs\n", (guests-chairCount));
    }
    if(cupsCount<guests){
        printf("%d Cups\n",  1+(guests-cupsCount)/6);
    }
    if(dishesCount<guests){
        printf("%d Dishes\n", 1+(guests-dishesCount)/6);
    }

    return 0;
}
