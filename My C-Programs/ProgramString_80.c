#include<stdio.h>


void Display(char *Brr)
{
    printf("Name is %s\n",Brr);
}
int main()
{
    char Arr[50];
    
    printf("Enter your name\n");
    scanf("%[^'\n']",Arr); // This Arr gives internally address, so there is no need to write '&' operator

   Display(Arr); //Display(50);  Name of array is intrnally considered as its base address
   return 0;
}