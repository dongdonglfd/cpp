#include<stdio.h>
void bubblesort(int arr[],int sz)
{
    int i=0;
    int j=0;
    int max=0;
    for(i=0;i<sz;i++)
    {
      if(arr[i]>max) max=i;
        
    }
    printf("%d",j);
}
int main()
{
    int arr[255];
    int n=0;
    int i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
}