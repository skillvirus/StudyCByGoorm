#include <stdio.h>
int return_func() {
    printf("난 실행된다 \n");
    return 0;
    printf("난 안돼 ㅠㅠ \n");
}

int main() {
    return_func();
    return 0;
}