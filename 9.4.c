#include<stdio.h>
void tiaohe(double a,double b)
{
    double x=0,y=0,k=0,n=0;
    x=1.0/a;
    y=1.0/b;
    k=(x+y)/2;
    n=1.0/k;
    printf("%f",n);
}
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    tiaohe(a,b);

return 0;
}