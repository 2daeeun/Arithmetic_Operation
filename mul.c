#include "mul.h"
int mul(int x, int y)
{
    int sum=0;

    for(int i = y; i > 0; i--)      //몇 번 더하기를 반복할지 카운팅
        sum = sum + x;

    return sum;
}
