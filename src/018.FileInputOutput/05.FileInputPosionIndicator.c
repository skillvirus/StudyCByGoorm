#include <stdio.h>
#define FilePath "/workspace/ProgrammingC/src/018.FileInputOutput/Files/b.txt" //b.txt : abcdef 가 저장
//a.txt 로 변경해서 실행 해보면?
int main() {
    //현재 fp 에 abcdef 가 들어있는 상태
    FILE *fp = fopen(FilePath, "r");
    fgetc(fp); //a
    fgetc(fp); //b
    fgetc(fp); //c
    fgetc(fp); //d
    //d 까지 입력받았으니 파일 위치지정자는 이제 e 를 가리키고 있음
    fseek(fp, 0, SEEK_SET); //파일 위치 지정자를 제일 처음으로 회귀
    printf("다시 파일 처음에서 입력 받는다면 : %c \n", fgetc(fp));
    fclose(fp);
    
    return 0;
}