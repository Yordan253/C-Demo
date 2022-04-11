#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//int main()
//{
//    char str[50];
//    int br=0;
//    printf("Enter string: ");
//    gets(str);
//    for(int i=0; i<strlen(str); i++)
//    {
//        br++;
//    }
//    printf("The length of %s is: %d ",str,br);
//
//
//    return 0;
//}

//int main()
//{
//    char str[50];
//    int wordCount=1;
//    printf("Enter string: ");
//    gets(str);
//    for(int i = 0; i<strlen(str); i++)
//    {
//        if(str[i] == ' ')
//        {
//            wordCount++;
//        }
//    }
//    printf("Word count is : %d ", wordCount);
//}

//int main()
//{
//    char str[50];
//    int count=0;
//    printf("Enter string: ");
//    gets(str);
//
//    int n=strlen(str);
//
//    for(int i = 0; i<n; i++)
//    {
//        count=1;
//        if(str[i])
//        {
//            for(int j = i+1;j<n;j++)
//            {
//                if(str[i]==str[j])
//                {
//                    count++;
//                    str[j]='\0';
//                }
//            }
//           printf("'%c' = %d \n",str[i],count);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    char str[50];
//    int count=0,n;
//    printf("Enter string: ");
//    gets(str);
//    n=strlen(str);
//
//    for(int i = 97; i<=122;i++)
//    {
//        for(int j = 0; j<n; j++)
//        {
//            if((int)str[j]==i)
//            {
//                count++;
//            }
//        }
//        printf("%c %d\n",i, count);
//        count=0;
//    }
//    return 0;
//}


void strCheck(char *str1, char *str2)
{
    for(int i =0;i<strlen(str1);i++)
        {
            if(str1[i]!=str2[i])
            {
                printf("The strings are not the same!");
                exit(0);
            }
        }
}

int main()
{
    char str1[50];
    char str2[50];
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);

    if(strlen(str1)>=strlen(str2))
    {
        strCheck(str1,str2);
    }
    else
    {
        strCheck(str2,str1);
    }

    printf("The strings are the same!");
    return 0;
}

//int main()
//{
//    int vowelsCount = 0;
//    char str [50];
//    printf("Enter the string: ");
//    gets(str);
//
//    for(int i = 0; i<strlen(str); i++)
//    {
//        if(str[i] == 'a' ||
//           str[i] == 'e' ||
//           str[i] == 'o' ||
//           str[i] == 'u' ||
//           str[i] == 'y' ||
//           str[i] == 'i')
//        {
//            vowelsCount++;
//        }
//    }
//    printf("Count of vowels is: %d", vowelsCount);
//
//    return 0;
//}


//int main USELESS
//{
//    char str[50];
//    printf("Enter the string: ");
//    gets(str);
//    for(int i = 0; i<strlen(str);i++)
//    {
//        str[i]=toupper(str[i]);
//    }
//    printf("The string to upper case is: %s",str);
//
//    return 0;
//}


//void stringUpr(char *s);
//
//int main()
//{
//    char str[50];
//
//	printf("Enter any string : ");
//    gets(str);
//
//    stringUpr(str);
//    printf("The string to upper case is : %s\n",str);
//    return 0;
//}
//
//void stringUpr(char *s)
//{
//    int i=0;
//    while(s[i]!='\0')
//    {
//        if(s[i]>='a' && s[i]<='z'){
//            s[i]=s[i]-32;
//        }
//        ++i;
//    }
//}

//int main()
//{
//    char str[500];
//    printf("Enter the string: ");
//    int count=0;
//    gets(str);
//
//
//    for(int i =0; i<strlen(str); i++)
//    {
//        if(str[i]=='h'
//           &&str[i+1]=='a'
//           &&str[i+2]=='p'
//           &&str[i+3]=='p'
//           &&str[i+4]=='y')
//        {
//            count++;
//        }
//    }
//    printf("The count of happy is : %d", count);
//
//    return 0;
//}
