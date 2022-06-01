#include "div.h"
#include <stdio.h>
int div(int x, int y)
{
    int quotient=0;
    
    while(x >= y)
    {
        if(y == 0)  //0으로 나눗셈 할 때 고려
        {
            puts("(수학에서 0으로 나누기는 정의되어 있지 않습니다.)");
            break;
        }
        x = x - y;
        quotient = quotient + 1;
    }
    return quotient;
}
