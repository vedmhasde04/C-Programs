#include<stdio.h>

void Display(char *Brr)
{
    while (*Brr != '\0')
    {
        printf("%c\n",*Brr);
    }
    
}
int main()
{
    char Arr[10];

    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr); //Display(50)

    return 0;
}