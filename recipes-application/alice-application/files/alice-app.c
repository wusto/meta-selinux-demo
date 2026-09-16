#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd = -1;
    ssize_t size;
    char buf[4096];
    const char* filename = "/tmp/hello.txt";

    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        printf("Error opening file %s: %s\n", filename, strerror(errno));
        return -1;
    }

    printf("Successfully opened file %s\n", filename);

    size = read(fd, buf, sizeof(buf) - 1);
    if (size < 0)
    {
        printf("Error reading from file %s: %s\n", filename, strerror(errno));
        return -1;
    }

    buf[size] = '\0';

    printf("Successfully read %li bytes from file %s\n", size, filename);
    printf("Data: %s", buf);

    return 0;
}
