// 07주차 프로그래밍 실습
#include <stdio.h>

// 실습03
int inc(int counter);

int main(void) {
    int i = 10;
    printf("함수 호출전 i=%d\n", i);
    i = inc(i); // 함수 호출 결과 저장 필요
    printf("함수 호출후 i=%d\n", i);
    
    return 0;
}

int inc(int counter) {
    counter++;
    return counter;
}