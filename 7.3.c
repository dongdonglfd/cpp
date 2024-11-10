#include<stdio.h>
int main() 
{
	int n = 0, x= 0, y = 0;
	float a = 0, b= 0;
	do {
		printf("请输入整数");
		scanf("%d", &n);
		if (n== 0)
		{
			break;
		}
		if (n % 2 == 0)
		{
			a += n;
			x++;
		}
		if (n % 2 == 1)
		{
			b+= n;
			y++;
		}
	} while (1);
 
	printf("您所输入的偶数个数为：%d，平均数约为：%.2f\n您所输入的奇数个数为：%d，平均数约为：%.2f\n", x, a / x, y, b/ y);
 
	return 0;

}




