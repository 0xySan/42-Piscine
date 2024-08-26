/*#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(int n, char **v)
{
    int fd;
    int len;
    char buff[2];

    len = 1;
    fd = open(v[1], O_RDONLY);
    while (len > 0)
    {
        len = read(fd, buff, 2);
        printf("%02x%02x ",buff[1],buff[0]);
    }
    close(fd);
}*/