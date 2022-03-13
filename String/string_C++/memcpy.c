/*
    syntax: void * memcpy(void * destination, const void * source, size_t num);

    Tác dụng của hàm là sao chép num byte từ vị trí mà source trỏ tới đến vị trí mà destination trỏ tới

    + Tác dụng của hàm này khác với strcpy(), strcpy() sao chép vùng nhớ từ vị trí mà source 
    trỏ tới cho tới vị trí của kí tự ‘\0’ tới destination, do đó destination có giá trị 
    chuỗi giống với source, còn với memcpy() thì việc sao chép như thế nào hoàn toàn 
    do người dùng kiểm soát. Tùy trường hợp mà sử dụng 2 hàm này.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "We are Stdio's Writers";
    char str2[30] = "World";

    memcpy(str1 + 2, str2, 5);
    printf(" %s\n", str1);

    return 0;
}