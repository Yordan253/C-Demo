#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[7];
    int num;
    int *p = &num;
    int sum=0;
    for (int i = 0; i<7; i++)
    {
        printf("Enter num %d:", i);
        scanf("%d", p);
        while(*p<-5000 || *p>5000)
        {
            printf("The number must be between -5000 and 5000:\n");
            scanf("%d", p);
            numbers[i]=*p;
        }
        numbers[i]=*p;
        sum+=numbers[i];

    }
    printf("%d",sum);
    return 0;
}
//int main()
//{
//    int numbers[7];
//    int num;
//    int *p = &num;
//    int maxNum=INT_MIN;
//    for (int i = 0; i<7; i++)
//    {
//        printf("Enter num %d:", i);
//        scanf("%d", p);
//        if(*p<-5000 || *p>5000)
//        {
//            printf("Enter number between -5000 and 5000:\n");
//            scanf("%d", p);
//            numbers[i]=*p;
//        }
//        else
//        {
//            numbers[i]=*p;
//        }
//
//        if(numbers[i]>maxNum)
//        {
//            maxNum=numbers[i];
//        }
//
//    }
//
//
//    for(int j = 0; j<7;j++)
//    {
//        printf("Element[%d] = %d\n", j, numbers[j]);
//    }
//    printf("%d",maxNum);
//    return 0;
//}

//int main()
//{
//    int numbers[7];
//    int num;
//    int *p = &num;
//    int sum=0;
//    double avg;
//    for (int i = 0; i<7; i++)
//    {
//        printf("Enter num %d:", i);
//        scanf("%d", p);
//        if(*p<-5000 || *p>5000)
//        {
//            printf("Enter number between -5000 and 5000:\n");
//            scanf("%d", p);
//            numbers[i]=*p;
//        }
//        else
//        {
//            numbers[i]=*p;
//        }
//
//    }
//
//    for(int j = 0; j<7;j++)
//    {
//        printf("Element[%d] = %d\n", j, numbers[j]);
//        sum+=numbers[j];
//    }
//    avg=(double)sum/7;
//    printf("%lf",avg);
//    return 0;
//}

//int main()
//{
//    int numbers[7];
//    int num;
//    int *p = &num;
//    int sum=0;
//    for (int i = 0; i<7; i++)
//    {
//        printf("Enter num %d:", i);
//        scanf("%d", p);
//        if(*p<-5000 || *p>5000)
//        {
//            printf("Enter number between -5000 and 5000:\n");
//            scanf("%d", p);
//            numbers[i]=*p;
//        }
//        else
//        {
//            numbers[i]=*p;
//        }
//
//    }
//
//    for(int j = 0; j<7;j++)
//    {
//        printf("Element[%d] = %d\n", j, numbers[j]);
//        sum+=numbers[j];
//    }
//    printf("%d",sum);
//    return 0;
//}
