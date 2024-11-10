#include<stdio.h>
void max(int a[],int sz)
{
    int i=0;
    int max=0;
    for(i=0;i<sz;i++)
    {
        if(a[i]>max) max=a[i];
    }
    printf("%d",max);
}
int main()
{
    int a[5];
    int i=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int sz=sizeof(a)/sizeof(a[0]);
    max(a,sz);
    return 0;
}