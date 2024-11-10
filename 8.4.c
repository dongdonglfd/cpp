#include<stdio.h>
int main()
{
	int ch = 0, letternum = 0, wordnum = 0, mark = 0;
	float con = 0;
 
	printf("请输入字符");
 
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		{
			letternum++;
			mark= 1;
		}
		else if (mark == 1)
		{
			wordnum++;
			mark = 0;
		}
		else
			continue;
	}
 
	printf("您好！您所输入的单词数为：%d，平均每个单词的字母数为：%.1f\n", wordnum, (float)letternum / (float)wordnum);
 
	return 0;
}
