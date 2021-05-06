#include <stdio.h>
int main() {
    char sentence_1[6] = {'K', 'o', 'r', 'e', 'a', '\0'};
    char sentence_2[6] = {'K', 'o', 'r', 'e', 'a', 0};
    char sentence_3[6] = {"Korea"};
 
    printf("sentence_1 : %s \n", sentence_1);  // %s 를 통해서 문자열을 출력한다.
    printf("sentence_2 : %s \n", sentence_2);
    printf("sentence_3 : %s \n", sentence_3);

    return 0;
}