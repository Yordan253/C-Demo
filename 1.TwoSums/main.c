#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums [5] = {2,3,5,1,8};
    int result[2];
    int i=0,j=0;
    int target;
    printf("Target: ");
    scanf("%d", &target);
    for(i=0;i<5;i++){
        for(j = i+1;j<5;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                break;
            }
        }
    }

    for(i = 0; i<2;i++){
        printf("%d\n",result[i]);
    }

    return 0;
}
