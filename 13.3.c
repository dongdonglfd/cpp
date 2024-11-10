#include<stdio.h>
#include<ctype.h>
#include<string.h>
#incldue<errno.h>
#define LEN 10 
int main()
{
    FILE *fp1,*fp2;
    char ch;
    char name[LEN];
    
    if((fp1=fopen("a.txt","r"))==NULL){
        printf("%s\n",strerror(errno));
    }
    fprintf(stdout,"please enter the output file name:");
    fscanf(stdin,"%s",name);//输出的时候是stdin

    if((fp2=fopen(name,"w+"))==NULL){
        printf("%s\n",strerror(errno));
    }

    while((ch=getc(fp1))!=EOF){
        ch=toupper(ch);
        fprintf(fp2,"%c",ch);
    }
    fclose(fp1);
    fclose(fp2);

    return 0; 
}


