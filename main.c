// 07주차 프로그래밍 실습
#include <stdio.h>

// 실습06-1
static int all_files; // 해당 파일 내로 정의됨, 외부 파일에서 extern으로 접근 불가
// linking error 발생
extern void sub();

int main(void) {
    sub();
    printf("%d\n", all_files);
    return 0;
}