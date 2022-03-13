
// syntax: void * memset(void * ptr, int value, size_t num);
// Tác dụng của hàm là set num byte giá trị của vùng nhớ tính từ vị trí ptr trỏ tới bằng giá trị value

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = "We are Stdio's Writers";
    printf("%s\n", str);

    memset(str + 3, '@', 10); // set 10 byte từ vị trí thứ 4 của str thành @
    printf("%s\n", str);

    return 0;
}