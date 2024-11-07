#include<stdio.h>
#include <time.h> 
#include<stdlib.h>
int main()
{
    int i=0;
    int n=0;
    int arr[1000];
    for(i=0;i<1000;i++)
    {
        // srand((unsigned)time());
        arr[i]=rand()%10+1;
    }
    // for(int i=0;i<100;i++)
    // {
    //     printf("%d",arr[i]);
    // }
    for ( i = 0; i < 1000; i++){
        for (int j = i+1; j < 1000; j++){
            if (arr[i]<arr[j]){
                n = arr[i];
                arr[i] = arr[j];
                arr[j] = n;
            }
        }
    }
    for ( i = 0; i < 1000; i++){
        printf("%d   ",arr[i]);
        if (i%10 ==9){
            printf("\n");
        }  
    }
    return 0;
}
