// Problem Statment : Accept two numbers from user and display first number in second number of times.

#include<stdio.h>

int Display(int iNo, int iFrequency)
{
    auto int i = 0;

    for(i = 0; i < iFrequency; i++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    auto int iValue = 0;
    auto int iCount = 0;

    printf("Enter the first number: ");
    scanf("%d", &iValue);

    printf("Enter the Frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}