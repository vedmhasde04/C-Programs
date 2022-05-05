#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char Fname[30];
    char Data[7];

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if (fd == -1)
    {
      printf("Unable to open the file\n");
       return -1; // Return to OS
    }
    else
    {
        printf("File sucessfully opened with FD: %d\n",fd);
    }
    iRet = write(fd,Data,5);
    printf("%d bytes gets sucessfully read from the file\n",iRet);

     printf("Data from the file is : %s\n",Data);
    
    return 0;
}