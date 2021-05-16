#include <stdio.h>
int gv = 3;
int main() {
    char arr[20] = "WHATTHEHECK";
    int lv;
    char *str = "Hello, Baby";
    
    printf("Array(arr)     : %p \n", arr); //lv보다 큰 영역에 위치
    printf("L Variable(lv) : %p \n", &lv); //지역변수 : Stack 영역에 위치
    printf("G Variable(gv) : %p \n", &gv); //전역변수 : 데이터 영역에 위치
    printf("ReadOnly(str)  : %p \n", str); //리터럴 : ReadOny 영역에 위치
    
    return 0;
}