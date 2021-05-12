#include <stdio.h>
int main() {
    char arr1[] = "hello";
    char arr2[] = "world";
    
    arr1 = arr1 + arr2; //각 배열의 주소값을 더하는 것 -> 오류
    
    if (arr1 == arr2) { //arr1의 시작 주소와 arr2의 시작주소를 비교하는 것 -> 오류
        //do something
    }
    
    if (arr1 == "hello") { //arr1의 시작 주소와 hello 라는 문자열 리터럴이 보관된 주소를 비교하는 것 -> 오류
        //do something
    }
    
    printf("%s \n", arr1);
    
    return 0;
}