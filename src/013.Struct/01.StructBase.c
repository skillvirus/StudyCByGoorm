#include <stdio.h>
struct Human {
    double age; //나이
    double height; //키
    double weight; //몸무게
}; //세미콜론(;) 필수 추가

int main() {
    struct Human human;

    human.age = 46;
    human.height = 175.5;
    human.weight = 71.5;

    printf("-----HUMAN에 대한 정보----- \n");
    printf("나이   : %6.0f \n", human.age);
    printf("키     : %6.2f \n", human.height);
    printf("몸무게 : %6.2f \n", human.weight);
    
    return 0;
}