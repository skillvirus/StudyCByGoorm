//대문자를 소문자로, 소문자를 대문자로 변경
#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/some_data3.txt"

int main() {
    FILE *fp = fopen(FilePath, "r+");
    char c;

    if (fp == NULL) {
        printf("파일 열기를 실패하였습니다! \n");
        return 0;
    }

    while ((c = fgetc(fp)) != EOF) { //대문자일 경우
        if (65 <= c && c <= 90) {
            fseek(fp, -1, SEEK_CUR); //한 칸 뒤로 이동
            fputc(c + 32, fp); //소문자로 바뀐 c 를 출력
            fseek(fp, 0, SEEK_CUR); //쓰기 - 읽기 모드 전환을 위해서는 무조건 fseek 함수와 같은 파일 위치 지정자 설정 함수를 호출하여 파일 위치 지정자를 재설정해야함
            //fflush(fp); //fseek과 fflush 둘 중 하나의 함수는 호출하여만 한다.
        }
        else if (97 <= c && c <= 122) { //소문자일 경우
            fseek(fp, -1, SEEK_CUR);
            fputc(c - 32, fp);
            fseek(fp, 0, SEEK_CUR);
            //fflush(fp); //fseek과 fflush 둘 중 하나의 함수는 호출하여만 한다.
        }
    }

    fclose(fp);
    
    return 0;
}