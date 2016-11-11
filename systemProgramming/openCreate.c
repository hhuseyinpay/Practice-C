#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
    int fd;

    fd = open("/Users/aaa/cprograms/systemProgramming/deneme.txt",
            O_WRONLY | O_CREAT | O_TRUNC, 
            S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH);

    if(fd == -1)
        return -1;
    
    return 0;
}
