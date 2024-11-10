#include <stdio.h>
#define result(x, y)   (1.0/((1.0/(x) + 1.0/(y))/2.0))
int main()
{
    int num1, num2;

    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    
        printf("The result is %g\n", result(num1, num2));

    
    return 0;
}
