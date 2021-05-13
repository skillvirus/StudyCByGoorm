#include <stdio.h> 
void func(void); 
static int count = 5; //정적 전역 변수
int main() { 
    while(count--) { 
        func(); 
    } 
    
    return 0; 
} 

void func( void ) { 
    static int i = 5; //정적 지역 변수 
    i++; 
    printf("i : %d, count : %d\n", i, count); 
}