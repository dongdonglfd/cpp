#include<stdio.h>
int main()
{
    int i,j;
    int w=0;
    char s='F';
    for(i=1;i<=6;i++)
    {
        w=0;
        for(j=1;j<=i;j++)
        {
            printf("%c",s-w);
            w++;
            
        }
        printf("\n");
    }
    return 0;
}