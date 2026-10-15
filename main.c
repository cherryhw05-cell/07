// 07주차 프로그래밍 실습
#include <stdio.h>

// 실습06-1
int all_files;

extern void sub();

int main(void) {
    sub();
    printf("%d\n", all_files);
    return 0;
}