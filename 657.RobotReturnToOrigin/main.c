#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void judgeCircle(char * moves){
    int x = 0;
    int y = 0;
    int len = strlen(moves);

    for(int i = 0; i < len; i++){
        if(moves[i]=='U'){
            x++;
        }
        else if(moves[i]=='D'){
            x--;
        }
        else if(moves[i]=='R'){
            y++;
        }
        else if(moves[i]=='L'){
            y--;
        }
    }
    if(x==0 && y==0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }


}

int main()
{
    char commands[20];
    printf("Enter the commands: ");
    gets(commands);

    judgeCircle(commands);
    return 0;
}
