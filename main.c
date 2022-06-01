//#include "sign.h"     음수 구현하려다가 그만둔 흔적.
#include "add.h"        //더하기 함수
#include "sub.h"        //빼기 함수
#include "mul.h"        //곱하기 함수
#include "div.h"        //나누기 함수
#include <stdio.h>

int main()
{
    int a=0;
    char operator=0;
    int b=0;

    puts("입력할 수 A와 연산자 그리고 입력할 수 B를 입력하세요.");
    puts("===========================================================");
    printf("입력할 첫 번째 숫자 : ");   scanf("%d", &a);        getchar();
    printf("연산자 : ");                scanf("%c", &operator); getchar();
    printf("입력할 두 번째 숫자 : ");   scanf("%d", &b);        getchar();
    puts("===========================================================");
    
    if(operator == '+') printf("정답은 %d입니다.\n", add(a, b));
    else if(operator == '-') printf("정답은 %d입니다.\n", sub(a, b));
    else if(operator == '*') printf("정답은 %d입니다.\n", mul(a, b));
    else if(operator == '/') printf("정답은 %d입니다.\n", div(a, b));
    else printf("연산자를 다시 입력해주세요.");

    return 0;
}
