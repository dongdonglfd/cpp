#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct month
{
    char name[20];
    char abbr[4];
    int days;
    char number[3];
};
const struct month months[12] = { 
    {"January", "Jan", 31, "1"}, 
    {"February", "Feb", 28, "2"}, 
    {"March", "Mar", 31, "3"}, 
    {"April", "Apr", 30, "4"}, 
    {"May", "May", 31, "5"}, 
    {"June", "Jun", 30, "6"}, 
    {"July", "Jul", 31, "7"}, 
    {"August", "Aug", 31, "8"}, 
    {"September", "Sep", 30, "9"}, 
    {"October", "Oct", 31, "10"}, 
    {"November", "Nov", 30, "11"}, 
    {"December", "Dec", 31, "12"} 
}; 
int jiSuan(const char * in, int ri, int flag){
    int n = 0;
    int r = ri;
    for (int i = 0; i < 12; i++){
        if(strcmp(in,months[i].name) == 0 ||strcmp(in,months[i].abbr) == 0||strcmp(in,months[i].number) == 0){
            n = atoi(months[i].number);
        }
    }
    for (int i = 0; i < n-1; i++){
        r += months[i].days;
    }
    if (flag == 1 && n > 2){
        r += 1;
    }
    return r;
}

int main(){
    char input[20];
    int ri,year;
    int total;
    int flag;
    printf("请输入一个月份：\n");
    while (scanf("%s",input) == 1 && input[0] != 'q'){
        printf("请输入截止到这个月的几号：\n");
        flag = 0;
        scanf("%d",&ri);
        printf("请输入年份：\n");
        scanf("%d",&year);
        if ((year % 4 == 0 && year % 100 != 0)||year % 400 == 0){
            flag = 1;
        }
        total = jiSuan(input,ri,flag);
        if (total>0){
            printf("到%s月为止，一共有%d天。\n",input,total);
        }else{
            printf("输入的月份可能存在错误，请检查。\n");
        }
        printf("请输入下一个月份。输入q结束循环\n");   
    }
    printf("Done!!!");
    return 0;
}
