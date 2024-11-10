#include<stdio.h>
#include <stdint.h>
#include <string.h>

// 辅助函数：将32位无符号整数转换为二进制字符串
void print_binary(uint32_t num) {
    char binary[33]; // 32位 + 1位'\0'
    binary[32] = '\0'; // 字符串结束符
    for (int i = 31; i >= 0; i--) {
        binary[31 - i] = (num & (1 << i)) ? '1' : '0';
    }
    printf("%s\n", binary);
}
uint32_t rotate_bits_left(uint32_t x, int n) {
    n = n % 32; // 确保旋转位数在有效范围内
    return (x << n) | (x >> (32 - n)); // 左移和右移后按位或
}

int main() {
    uint32_t value = 0x12345678; 
    int rotate_by = 4;           
    printf("Original value: 0x%08X\n", value);
    print_binary(value); // 打印原始值的二进制表示

    uint32_t rotated_value = rotate_bits_left(value, rotate_by);
    printf("Rotated value:  0x%08X\n", rotated_value);
    print_binary(rotated_value); // 打印旋转后的值的二进制表示

    return 0;
}
