#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int i;
    FILE *fp;
    char ch;
    if(argc>1){
        printf("there are %dth files\n",argc-1);
        for(i=1;i<argc;i++){
            if((fp=fopen(argv[i],"r"))==NULL){
                fprintf(stderr, "Can't open %s\n", argv[i]);
                exit(EXIT_FAILURE);
            }
            while((ch=getc(fp))!=EOF){
                putchar(ch);
            }
            fclose(fp);
            
            fprintf(stdout,"\n%dth file is over\n",i);
            printf("\n");
        }
    }
    
    return 0; 
}

