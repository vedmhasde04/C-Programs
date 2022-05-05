#include<stdio.h>

int main()
{
    char Arr[50];
    
    printf("Enter your name\n");
    scanf("%[^'\n']",Arr); // This Arr gives internally address, so there is no need to write '&' operator

    printf("Your enterd name is: %s\n",Arr);
   return 0;
}