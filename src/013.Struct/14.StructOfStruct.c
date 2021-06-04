#include <stdio.h>
struct Employee {
    int age;
    int salary;
};
struct Company {
    struct Employee employee;
    char name[10];
};
int main() {
    struct Company company;

    company.employee.age = 31;
    company.employee.salary = 50000000;

    printf("근로자의 나이 : %d \n", company.employee.age);
    printf("근로자의 급여 : %d원/년 \n", company.employee.salary);

    return 0;
}