#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[10];

    fd = open("Ved.txt",O_RDWR);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

      ////////////////////
      // 0 From strating position

      // 1 From current position

      // 2 From end of the file
     lseek(fd,10,2);

     
     write(fd, " ",1);
    
    printf("\n");
     
     close(fd);
    
    return 0;
}