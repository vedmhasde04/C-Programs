#include<stdio.h>
#include<stdlib.h>

int LastOccurnce(int Arr[], int iSize, int iNo)
{
    int i = 0,index = -1;

    for (i = 0 ; i < iSize; i++)
    {
      if (Arr[i] == iNo)
      {
         index = i;
      }
      
    }
   return index; 
}
int main()
{
    int iLength = 0, i = 0,iValue = 0,iRet = 0;
}