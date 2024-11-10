#include<stdio.h>
#incldue<errno.h>
#include<string.h>
#define LEN 10
int main()
{
	char name[LEN];  
    char ch;
	unsigned long count = 0;
	printf("please enter the file name:");
    scanf("%s",name);
    FILE *fp=fopen(name,"r");
    if(fp==NULL){
        printf("%s\n",strerror(errno));
    }
    
    while ((ch = getc(fp)) != EOF){
        putc(ch, stdout); 
        count++;
    }
	fclose(fp);
	printf("\nFile %s has %lu characters\n", name, count);
	return 0;
}

