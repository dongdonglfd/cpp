#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 44
struct name{
     char ming[SIZE];
     char zhong[SIZE];
     char xing[SIZE];
};
struct test
{
     char shebao[100];
     struct name a;
};
struct test arr[5] ={
     {"302039823",{"Dribble","M","Flossie"}},
     {"231907821",{"Rell","C","Black"}},
     {"124324221",{"Dick","","James"}},
     {"124454545",{"Rose","","Kell"}},
     {"456565451",{"Pell","II","Gala"}}
};
void daYin(const struct test (*ptr)){
     for (int i = 0; i < 5; i++){
          if (strlen((ptr+i)->a.zhong) > 0){
               printf("%s, %s %s. -- %s\n",(ptr+i)->a.ming,(ptr+i)->a.xing
               ,(ptr+i)->a.zhong,(ptr+i)->shebao);
          }else{
               printf("%s, %s -- %s\n",(ptr+i)->a.ming,(ptr+i)->a.xing
               ,(ptr+i)->shebao);
          }
     }
}
int main(){
     struct test (*ptr) = arr;
     printf("----------程序开始----------\n");
     daYin(ptr);
     printf("----------------------------\n");
     daYint(arr);
     printf("----------程序结束----------\n");
     return 0;
}

