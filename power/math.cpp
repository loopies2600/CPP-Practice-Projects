#include "math.h"

int pow(int num, int exp)
{
    int initialNum = num;
    int i{1};

    while(i < exp)
    {
        i++;
        num *= initialNum;
    }

    return num;
}
