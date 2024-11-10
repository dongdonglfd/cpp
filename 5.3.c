#include<stdio.h>
int main()
{
    int n=0;
    int week,day;
    scanf("%d",&n);
    week=n/7;
    day=n%7;
    printf("%ddays are %dweeks,%ddays",n,week,day);
    return 0;
}