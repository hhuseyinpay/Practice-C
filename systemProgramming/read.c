#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main(void)
{
    int fd;
    unsigned long word;
    ssize_t nr;

    fd = open("/Users/aaa/cprograms/systemProgramming/deneme.txt",O_RDONLY);
    nr = read(fd, &word, sizeof(unsigned long));
    if(nr == -1)
        return -1;
printf("%lu",word);
    return 0;
}
