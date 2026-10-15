// 07주차 프로그래밍 실습
#include <stdio.h>

// int main(void) {
//     int i;

//     for (i = 1; i < 5; i++) {
//         int temp = 1;
//         printf("temp = %d\n", temp);
//         temp++;
//     }
    
//     return 0;
// }

// 실습01
int main(void) {
    int flag = 1;
    int y;
    while(flag != 0) {
        y = 3;
        flag = 0;
    }
// y = 4; --> while함수 밖에서 y를 정의하지 않았음
    y = 4;

    return 0;
}  