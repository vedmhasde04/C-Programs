#include<stdio.h>
void Display(int); // Declaration
int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}
void Display(int iValue) // Defination
{
    int i = 0;
    //     1            2    3
    for ( i = iValue; i>=1; i--)
    {
         printf("%d\n",i);  //  4
    }
    
}