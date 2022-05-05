#include<stdio.h>

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   char ch = '\0';// Default value of character(Escape Sequence)

   for ( iCnt = 1,ch ='A'; iCnt <= iNo; iCnt++,ch++)
   {
       printf("%c\t\n",ch);
      
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