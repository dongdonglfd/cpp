#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double r, angle, h;
    double x, y;
    printf("请输入向量的模（长度）: ");
    scanf("%lf", &r);
    printf("请输入向量相对于x轴逆时针旋转的角度（度）: ");
    scanf("%lf", &angle);
    h = angle * (PI / 180.0);
    x = r * cos(h);
    y = r * sin(h);
    printf("向量在直角坐标系中的坐标为: (%.2lf, %.2lf)\n", x, y);

    return 0;
}