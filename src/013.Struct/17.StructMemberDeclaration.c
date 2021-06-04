//구조체 맴버를 초기화하는 색다른 방법(Visual Studio 에서 실행)
#include <stdio.h>
int Print_Status(struct HUMAN human);
struct HUMAN {
    int age;
    int height;
    int weight;
    int gender;
};

int main() {
    struct HUMAN Adam = {31, 182, 75, 0};
    struct HUMAN Eve = {27, 166, 48, 1};

    Print_Status(Adam);
    Print_Status(Eve);
}

int Print_Status(struct HUMAN human) {
    if (human.gender == 0) {
        printf("MALE \n");
    } else {
        printf("FEMALE \n");
    }

    printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height, human.weight);

    if (human.gender == 0 && human.height >= 180) {
        printf("HE IS A WINNER!! \n");
    } else if (human.gender == 0 && human.height < 180) {
        printf("HE IS A LOSER!! \n");
    }

    printf("------------------------------------------- \n");

    return 0;
}