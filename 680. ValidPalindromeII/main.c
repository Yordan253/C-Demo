#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string=NULL;
//    char *reverseString=NULL;
    int len;
    printf("Len of string: ");
    scanf("%d", &len);
    string = malloc(sizeof(char) * len);
//    reverseString = malloc(sizeof(char) * len);
    if(string==NULL){
        exit(1);
    }
    for(int i = 0; i<len;i++)
    {
        scanf("%s", &string[i]);
    }


    for(int i = len - 1,j=0; i>=0;i--, j++)
    {
        if(string[i]!=string[j])
        {
            printf("%s is not a palindrome", string);
            return 0;
        }

    }

    printf("%s is a palindrome\n", string);
    free(string);
    return 1;
}
