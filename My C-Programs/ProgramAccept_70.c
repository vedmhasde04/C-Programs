#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckNumber(int Arr[], int iSize)
{
    int i = 0;

     
    for(i = 0; i < iSize; i++)
     {
         if (Arr[i] == 11)
         {
           break;
         }
         if ( i == iSize)
         {
            return false;
         }
         else{
             return true;
         }
    }
}
int main()
{
    int iLength = 0,i = 0,iRet = 0;
    int *ptr = NULL;
  

   printf("Enter number of elements\n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(sizeof(int)* iLength);
   printf("Enter elements\n");
   for(i = 0; i < iLength; i++)
   {
       scanf("%d",&ptr[i]);
   }

   iRet = CheckNumber(ptr,iLength);
   printf("Number is there: \n",iRet);
   free(ptr);

      
    return 0;
}