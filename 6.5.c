#include<stdio.h>
int main()
{
    int i,j;
    int w=0;
    char a='A';
    for(i=1;i<=5;i++)
    {
        w=0;
        for(j=1;j<=i;j++)
        {
            printf("%c",a+w);
            w++;
        }
        for(j=i;j<2*i-1;j++)
        {
            printf("%c",a+w-2);
            w--;
        }
         printf("\n");
    }
    
}