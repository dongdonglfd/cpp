#include<stdio.h>
void ceshi(void)
{
    static int number = 0;
    number++;
    printf("测试函数被调用了%d次\n",number);
}
int main()
{

    int n;
    printf("输入正数进入循环，负数退出：\n");
    while (scanf("%d",&n)==1 && n>0){
        ceshi();
        
    }
    printf("\n");
    return 0;
}


