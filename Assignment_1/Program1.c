// Problem Statment: Program to Divide two Numbers.

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    auto int iAns = 0;      

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    auto int iValue1 = 15;
    auto int iValue2 = 5;
    auto int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is: %d", iRet);

    return 0;
}