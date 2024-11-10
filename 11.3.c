#include<stdio.h>
#define N 20
void get_c(char * arr, int n){
    scanf("%s",arr);
}
int main()
{
    char arr[N];
    printf("请输入字符：\n");
    get_c(arr,N);
    printf("%s",arr);
    return 0;
}
