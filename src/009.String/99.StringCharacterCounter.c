//입력한 문자열중 각 문자의 개수 출력
#include <stdio.h>
#include <string.h>
int main() {
    char words[100];
    char alpabet[30];
    int counter[30] = {0,};
    int count = 0;

    printf("문자열을 입력해주세요! : ");
    scanf("%s", words);

    printf("문자열 : %s \n", words); //배열 이름 자체가 배열을 가리키는 포인터이므로 & 없음
    
    //알파벳 저장
    for(int i = 0; i <= 25; i++) {
        alpabet[i] = i + 97; //아스키 코드 값으로 알파벳 저장
    }
    
    //입력받은 문자열과 저장한 알파벳 배열과 비교
    for(int i = 0; i <= 25; i++) {
        for (int j = 0; j < strlen(words); j++) {
            if (words[j] == alpabet[i]) {
                counter[i] = ++count;
            }
        }
        count = 0;
    }
    
    for(int i = 0; i <= 25; i++) {
        if (counter[i] != 0) {
            printf("%c : %d \n", alpabet[i], counter[i]);
        }
    }
    
    return 0;
}