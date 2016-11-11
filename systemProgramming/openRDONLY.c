#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
    int fd;
    
    fd = open("/Users/aaa/cprograms/systemProgramming", O_RDONLY);

    if(fd == -1)
        return -1;
    return 0;
}
