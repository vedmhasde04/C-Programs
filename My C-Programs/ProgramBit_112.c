#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 0x0000000F;// 0000 0000 0000 0000 0000 1000 0000 1111
                          //  0     0    0    0    0    0    0      15
                          //         0x0000000F
    UINT iResult = 0;

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if (bRet == true)
    {
        printf("First  bits are  ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }
    return 0;
}