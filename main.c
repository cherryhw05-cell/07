// 07주차 프로그래밍 실습
#include <stdio.h>

// 실습05
void sub(void);

int main(void) {
    int i;
    for (i=0; i<3; i++)
        sub();
    return 0;
}

void sub(void) {
    int auto_count = 0;
    static int static_count = 0; // 변수 생성시에만 0으로 초기화
    auto_count++; // 함수 끝나면 소멸 --> 저장X
    static_count++;

    printf("auto_count=%d\n", auto_count);
    printf("static_count=%d\n", static_count);
}