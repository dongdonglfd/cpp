#include<stdio.h>
void tiaoxu(double*a,double*b,double*c)
{
    double t=0;
    if(*a>*b)
    {
        t=*a;
        *a=*b;
        *b=t;
    }
    if(*a>*c)
    {
        t=*a;
        *a=*c;
        *c=t;
    }
    if(*b>*c)
    {
        t=*b;
        *b=*c;
        *c=t;
    }
}
int main()
{
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    double*a=&x;
    double*b=&y;
    double*c=&z;
    tiaoxu(a,b,c);
    printf("%f %f %f",x,y,z);
    return 0;

}