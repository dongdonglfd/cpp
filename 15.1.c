// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>
// int pbiningToInt(const char *pbin) {
//     int length = strlen(pbin);
//     int result = 0;
//     for (int i = 0; i < length; i++) {
//         if (pbin[i] == '0') {
//         } else if (pbin[i] == '1') {
//             // 将当前位加入结果中，每次循环左移一位（相当于乘以2）
//             result= (result << 1)+1;
//         } 
//     }

//     return result;
// }


// int main() {    
// char *pbin = "01001001";

//     int result = pbiningToInt(pbin);
//     printf("The integer value is: %d\n", result);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// 函数声明
int binaryToDecimal(const char *pbin);

int main() {
    const char *pbin = "01001001"; // 示例二进制字符串
    int decimalValue = binaryToDecimal(pbin);
    printf("The decimal value is: %d\n", decimalValue);
    return 0;
}

// 函数定义
int binaryToDecimal(const char *pbin) {
    int length = strlen(pbin);
    int decimalValue = 0;
    int power = 1; // 2的幂，初始化为1，因为二进制字符串是从最低位开始的

    // 从字符串的末尾开始遍历，因为二进制是从右到左计算的
    for (int i = length - 1; i >= 0; i--) {
        if (pbin[i] == '0') {
            // 当前位是0，不添加任何值
        } else if (pbin[i] == '1') {
            // 当前位是1，将其对应的2的幂次加到十进制值中
            decimalValue += power;
        } else {
            // 如果字符不是'0'或'1'，则返回错误值
            fprintf(stderr, "Invalid binary string\n");
            exit(EXIT_FAILURE);
        }
        power *= 2;
    }

    return decimalValue;
}