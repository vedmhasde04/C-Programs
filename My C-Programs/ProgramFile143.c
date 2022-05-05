#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fdssrc = 0, fddest = 0, iRet = 0;
    char Fname1[30];
    char Fname2[30];
    
    char Buffer[1024]; // Mug

    printf("Enter source file name\n");
    scanf("%s",Fname1);

    fdssrc = open(Fname1,O_RDONLY);

    if (fdssrc == -1)
    {
      printf("Unable to open the file\n");
       return -1; // Return to OS
    }
    else
    {
        printf("File sucessfully opened with FD: %d\n",fdssrc);
    }
     printf("Enter destination file name: \n");
      scanf("%s",Fname2);

      fddest = creat(Fname2,0777);

     while (( iRet = read(fdssrc,Buffer,sizeof(Buffer))) != 0)
     {
        write(fddest,Buffer,iRet);
     }
     
     
     close(fdssrc);
     close(fddest);
     return 0;
}