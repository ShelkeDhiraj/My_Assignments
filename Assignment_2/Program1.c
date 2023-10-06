// Problem Statment : Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display(int iNo)
{
    auto int iCnt =0;

    for(iCnt = 0; iCnt < iNo; iCnt++ )
    {
        printf(" * ");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}