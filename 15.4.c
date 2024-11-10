#include <stdio.h>
int check(int value, int position) 
{
    return (value & (1 << position)) != 0;
}

int main() {
    int value = 29;  // 示例值，二进制表示为 11101
    int position = 3; 

    int result = check(value, position);
    if (result == 1) {
        printf("The bit at position %d is 1.\n", position);
    } else {
        printf("The bit at position %d is 0.\n", position);
    }

    return 0;
}
