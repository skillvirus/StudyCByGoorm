#include <stdio.h>
union A { //공용체는 구조체와 달리 메모리를 공유
    int i;
    char j;
};
int main() {
    union A a;
    a.i = 0x12345678;
    //리틀엔디안 방식으로 변수값 저장
    printf("%x \n", a.j); //형식지정자 x : 부호없는 16진수 표기
    
    return 0;
}