#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10005];
    int i, k=0;
    gets (s);
    k = strlen(s);
    printf("%d", k);
    for(i=0; i<k; i++){
        if(s[i]=='2')
            s[i]='`';
        else if(s[i]=='3')
            s[i]=='1';
        else if(s[i]=='4')
            s[i]='2';
        else if(s[i]=='5')
            s[i]='3';
        else if(s[i]=='6')
            s[i]='4';
        else if(s[i]=='7')
            s[i]='5';
        else if(s[i]=='8')
            s[i]='6';
        else if(s[i]=='9')
            s[i]='7';
        if(s[i]=='0')
            s[i]='8';
        if(s[i]=='-')
            s[i]='9';
        if(s[i]=='=')
            s[i]='0';

        if(s[i]=='e' || s[i]=='E')
            s[i]='q';
        if(s[i]=='r' || s[i]=='R')
            s[i]='w';
        if(s[i]=='t' || 'T')
            s[i]='e';
        if(s[i]=='y' || s[i]=='Y')
            s[i]='r';
        if(s[i]=='u' || s[i]=='U')
            s[i]='t';
        if(s[i]=='i' || s[i]=='I')
            s[i]='y';
        if(s[i]=='o' || s[i]=='O')
            s[i]='u';
        if(s[i]=='p' || s[i]=='P')
            s[i]='i';
        if(s[i]=='[' || s[i]=='{')
            s[i]='o';
        if(s[i]==']' || s[i]=='}')
            s[i]='p';

        if(s[i]=='d' || s[i]=='D')
            s[i]='q';
        if(s[i]=='e' || s[i]=='E')
            s[i]='q';
    }
    puts(s);
    return 0;
}
