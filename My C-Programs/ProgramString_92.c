#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char c)
{
    if ((c >= '0') && (c <= '9'))
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
    char ch = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c",&ch);
    bRet = CheckSmall(ch);

    if (bRet == true)
    {
        printf("It is digit\n");
    }
    else
    {
        printf("It is not digit\n");
    }
    return 0;
    
}
