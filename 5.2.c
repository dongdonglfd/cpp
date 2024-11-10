#include<stdio.h>
int main()
{
    int n;
	int num1 = 0, num2 = 0;
	printf("请输入一个整数，");
	scanf("%d", &num1);
	num2 = num1 + 10;
	while (num1 <= num2)
	{
		printf("%d\n", num1);
		num1++;
	}
	
 
	return 0;
}
