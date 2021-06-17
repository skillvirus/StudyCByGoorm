//fseek 함수
#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/some_data.txt"

int main() {
    FILE *fp = fopen(FilePath, "r");
    char data[10];
    char c;

    if (fp == NULL) {
        printf("file open error ! \n");
        return 0;
    }

    fgets(data, 5, fp); //두번째 인자(5)의 -1만큼 입력 받음(NULL문자를 위한 자리 때문에 -1한 크기를 입력 받음)
    printf("입력 받은 데이터 : %s \n", data);

    c = fgetc(fp);
    printf("그 다음에 입력 받은 문자 : %c \n", c);

    fseek(fp, -1, SEEK_CUR); //현재 파일 위치 지정자에서 -1만큼(왼쪽으로 1) 이동

    c = fgetc(fp);
    printf("fseek 실행 후 입력 받은 문자 : %c \n", c);

    fclose(fp);
    
    return 0;
}