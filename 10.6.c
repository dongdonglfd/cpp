#include<stdio.h>
void bubble(int arr[],int sz)
{
    int i=0;
    int j=0;
    int t=0;
    for(i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        
        }
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=10;
    int i=0;
    bubble(arr,sz);
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}