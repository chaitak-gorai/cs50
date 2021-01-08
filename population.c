#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

int s,e,p,n=0,y=0;

do
    {
        s=get_int("write starting population:");

    }while(s<9);

do
    {
     e=get_int("write end population:");

    }while(e<s);


while(s<e){
    s=s+(s/3)-(s/4);
    y++;
}

printf("year:%d",y);
}