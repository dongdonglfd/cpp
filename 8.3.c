#include<stdio.h>
int main()
{
	int ch = 0, x = 0, y = 0;
 
	printf("请输入字符");
 
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			y++;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			x++;
		}
		else
			continue;
	}
 
	printf("输入的大写字母的个数为：%d，小写字母的个数为：%d", x, y);
 
	return 0;
}
