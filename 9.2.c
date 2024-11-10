#include<stdio.h>
void chline(char a,int i,int j)
{
    int x,y;
    for(x=0;x<i;x++)
    {
        for(y=0;y<j;y++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    
}
int main()
{
    char a;
    int i=3,j=3;
    scanf("%c",&a);
    chline(a,i,j);
    return 0;
}