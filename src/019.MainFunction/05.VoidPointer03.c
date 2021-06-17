//임의의 주소값 p 로 부터 byte 만큼 읽은 함수
#include <stdio.h>
int read_char(void *p, int byte);
int main() {
    int arr[1] = {0x12345678};

    printf("%x \n", arr[0]);
    read_char(arr, 4); //리틀엔디안 방식으로 저장됨(낮은 자릿수가 낮은 주소값 할당)
}

int read_char(void *p, int byte) {
    do {
        printf("%x \n", *(char *)p);
        byte--;

        p = (char *)p + 1;
    } while (p && byte);

    return 0;
}