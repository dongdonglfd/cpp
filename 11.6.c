#include<stdio.h>
int is_within(char a,char* s)
{
    while(*s!='\0')
    {
        if(a=*s) return 1;
        s++;
    }
    return 0;
}
int main()
{
    char a='a';
    char *s="adbfhbgh";
    int i=0;
    i=is_within(a,s);
    printf("%d",i);
    return 0;

}