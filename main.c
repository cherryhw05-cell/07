// 07주차 프로그래밍 실습
#include <stdio.h>

// 실습04
// int counter;

// void set_counter() {
//     counter = 20;
// }
// int main(void) {
//     printf("counter=%d\n", counter);
//     set_counter();
//     printf("counter=%d\n", counter);
//     return 0;
// }

void f(void);

int i; // i = 0 초기값 , 하단의 반복분 돌며 i = 10 으로 재설정된 값 그대로 유지  
int main(void) {
    for (i=0; i<5; i++) {
        f();
    } // i = 10 이므로 for문 안돌음
    return 0;
}

void f(void) {
    for (i=0; i<10; i++)
    printf("#");
}