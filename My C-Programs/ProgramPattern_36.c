#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   char ch = 'a';

   for ( iCnt = 1; iCnt <= iNo; iCnt++)
   {
       printf("%c\t",ch);
       ch++;
   }
   printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue); //Display(5)

    return 0;
}