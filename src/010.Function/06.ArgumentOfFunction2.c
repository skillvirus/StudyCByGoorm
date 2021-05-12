#include <stdio.h>
int slave(int my_money) {
    my_money += 10000;
    
    return my_money;
}

int main() {
    int my_money = 100000;
    
    printf("현재 주인님의 재산(함수호출) : $%d \n", slave(my_money));
    printf("현재 주인님의 재산(my_money) : $%d \n", my_money);

    return 0;
}