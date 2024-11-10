#include<stdio.h>
#define HOUR 60
int main()
{
   
	int min = 1;
	while (min > 0)
	{
		printf("请输入时间");
		scanf("%d", &min);
		if (min > 0)
		{
			printf("您输入的时间为：%d时%d分\n", min / HOUR, min % HOUR);
		}	
	}
	
 
	return 0;
}
