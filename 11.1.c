#include<stdio.h>
#define  N 20
void get(int n,char *data){
    fgets(data,n,stdin);
    fputs(data,stdout);
}

int main()
{

    char data[N];
    printf("please enter:");
    get(N,data);
    return 0; 
}
