#include <stdio.h>
#include <stdlib.h>

int main()
{
    //0 for false 1 for true
    int n;
    int bill5=0;
    int bill10=0;
    int bill20=0;
    printf("Enter array length: ");
    scanf("%d", &n);
    int bills [n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter %d customer money: ", i+1);
        scanf("%d", &bills[i]);
    }

    for(int i = 0; i<n; i++)
    {
        switch(bills[i]){
            case 5:
                bill5++;
            break;

            case 10:
                bill10++;
                bill5--;
                if(bill5<0)
                {
                    return 0;
                }
            break;

            case 20:
                bill20++;
                if(bill10<=1&&bill5>=3)
                {
                    bill5-=3;
                }
                else
                {
                    bill5--;
                    bill10--;
                }
                if(bill10<0||bill5<0||bill20<0)
                {
                    return 0;
                }
            break;

            default:
            printf("Wrong input!");
        }
    }

    return 1;




    return 0;
}
