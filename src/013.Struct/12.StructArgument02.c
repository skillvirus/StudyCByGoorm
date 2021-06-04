#include <stdio.h>
struct Human {
    int age;
    int gender;
};
int set_human(struct Human *a, int age, int gender);
int main() {
    struct Human human;
    set_human(&human, 10, 1);
    printf("AGE : %d // Gender : %d \n", human.age, human.gender);
    
    return 0;
}
int set_human(struct Human *a, int age, int gender) {
    a->age = age;
    a->gender = gender;

    return 0;
}