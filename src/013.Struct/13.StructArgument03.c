#include <stdio.h>
struct Human {
    int age;
    int gender;
    char name[20];
};
int set_human(struct Human *a, int age, int gender, char *name);
char copy_str(char *dest, char *src);

int main() {
    struct Human human;

    set_human(&human, 10, 1, "Kim");
    printf("AGE : %d // Gender : %d // Name : %s \n", human.age, human.gender, human.name);
    return 0;
}
int set_human(struct Human *a, int age, int gender, char *name) {
    a->age = age;
    a->gender = gender;
    copy_str(a->name, name);

    return 0;
}
char copy_str(char *dest, char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}