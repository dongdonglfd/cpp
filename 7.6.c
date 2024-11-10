#include<stdio.h>
int main()
{
	int i = 0, sum = 0;
	char ch = 0;
	printf("请输入：");
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			i = 1;
		}
		else if (ch == 'i' && i == 1)
		{
			i = 2;
			sum++;
		}
		else
			i = 0;
	}
	printf("ei出现的次数为：%d\n", sum);
	return 0;
}
