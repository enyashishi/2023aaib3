# include <stdio.h>
# include <string.h> //step05:strchr(s,c) not used here
# include <ctype.h> //step04: tolower(c)
int main()
{
    //step03: keyboard keys
    char s[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char c;
    //step01: input
    while(scanf("%c",&c)==1){
        c=tolower(c); // step04
        if(c==' ' || c=='\n') printf("%c",c);
        else{
            c= *(strchr(s,c)-2);
            printf("%c",c);
        }
    }
}