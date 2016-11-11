#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    int fd;
    unsigned long word = 1720;
    size_t count;
    ssize_t nr;
    
    fd = open("/Users/aaa/cprograms/systemProgramming/deneme.txt", O_WRONLY);
    count = sizeof(word);
    nr = write(fd, &word, count);
    if (nr == -1)
        return -1;
    else if (nr != count)
        return nr - count;
    return 0;
}
