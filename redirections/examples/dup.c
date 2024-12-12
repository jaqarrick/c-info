#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *message = "foo\n";
    char *filename = "bar";

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0) {
        return -1;
    }
    dup2(fd, STDOUT_FILENO);
    close(fd);
    write(STDOUT_FILENO, message, strlen(message));
    return EXIT_SUCCESS;
}