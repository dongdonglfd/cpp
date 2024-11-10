#include<stdio.h>
int main()
{
	int i = 0, max = 0;
	char ch[255] = { 0 };
 
	printf("请输入任意字符：");
	
	for (i = 0; (ch[i] = getchar()) != '#'; i++)
	{
		max = i;
		while (getchar() != '\n')
			continue;
		printf("请继续输入：");
	}
 
	for (i = 1; i <= max + 1; i++)
	{
		printf("%c-%d ", ch[i - 1], ch[i - 1]);
		if (i % 8 == 0)
		{
			printf("\n");
		}
	}
 
	
	return 0;
 }