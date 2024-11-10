#include<stdio.h>
int main()
{
	
	int ch[500] = { 0 }, count = 0, i = 0;
 
	printf("请输入字符");
 
	while ((ch[i] = getchar()) != EOF)
	{
		i++;
	}
 
	printf("您输入的字符及对应的ASCII码为：\n");
 
	for (i = 0; ch[i] != EOF; i++)
	{
		if (ch[i] == '\n')
		{
			printf("\\n-%-8.d ", ch[i]);
		}
		else if (ch[i] == '\t')
		{
			printf("\\t-%-8.d ", ch[i]);
		}
		else
			printf("%c-%-8.d ", ch[i], ch[i]);
		count++;
		if (count == 10)
		{
			printf("\n");
			count = 0;
		}
	}
 
	
	
	return 0;
}
