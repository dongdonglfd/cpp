#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0, n10 = 0;
    for (int i = 0; i < 1000; i++){
        n = rand() % 10 + 1;
        switch (n){
        case 1:
            n1++;
            break;
        case 2:
            n2++;
            break;
        case 3:
            n3++;
            break;
        case 4:
            n4++;
            break;
        case 5:
            n5++;
            break;
        case 6:
            n6++;
            break;
        case 7:
            n7++;
            break;
        case 8:
            n8++;
            break;
        case 9:
            n9++;
            break;
        case 10:
            n10++;
            break;
        default:
            break;
        }
    }
    printf("数字-------出现的次数\n");
    printf("1--------%d\n",n1);
    printf("2--------%d\n",n2);
    printf("3--------%d\n",n3);
    printf("4--------%d\n",n4);
    printf("5--------%d\n",n5);
    printf("6--------%d\n",n6);
    printf("7--------%d\n",n7);
    printf("8--------%d\n",n8);
    printf("9--------%d\n",n9);
    printf("10--------%d\n",n10);
    printf("\n");
    return 0;
}