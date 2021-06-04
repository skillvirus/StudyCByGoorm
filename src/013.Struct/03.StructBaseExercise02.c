#include <stdio.h>
struct Books {
    char name[30]; //책이름
    char auth[30]; //저자 이름
    char publ[30]; //출판사 이름
    int borrowed; //대여상태
};
int main() {
    struct Books book_list[3]; //구조체 배열(struct Books형 변수의 배열)
    int i;

    for (i = 0; i < 3; i++) {
        printf("No %d 책 정보 입력 : ", i + 1);
        scanf("%s %s %s", book_list[i].name, book_list[i].auth, book_list[i].publ);
        book_list[i].borrowed = 0;
      }

    for (i = 0; i < 3; i++) {
        printf("------------------------------- \n");
        printf("책제목 : %s \n", book_list[i].name);
        printf("저자   : %s \n", book_list[i].auth);
        printf("출판사 : %s \n", book_list[i].publ);

        if (book_list[i].borrowed == 0) {
            printf("대여가능 \n");
        } else {
            printf("대여중 \n");
        }
    }
    
    return 0;
}