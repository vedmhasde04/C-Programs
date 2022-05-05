#include<stdio.h>

int ReverseDigit(int);

int main()
{
   int iValue=0,iRet =0;

   printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = ReverseDigit(iValue);
    printf("Reverse number is : %d\n",iRet);

    return 0;
}
int ReverseDigit(int iNo)
{
    int iDigit = 0, iRev = 0;

    if (iNo == 0)
    {
        return 1;
    }
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
       iDigit = iNo %10;

       iRev = (iRev * 10) + iDigit;
       
       iNo = iNo/10;
    }
   return iRev; 
}