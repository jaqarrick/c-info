# Pipes
Pipes are special types of files (remember, everything is a file in unix systems). They allow process to pass data between each other in what is known as inter-process communication (IPC).

Typically, the following is true of pipes:
- One direction (i.e. data only flows one way)
- Only possibly between processes that share a common ancestor.

We'll learn later that certain mechanisms can bypass these restrictions (psst FIFOs and Sockets)

We can create a pipe with the `pipe()` system call. This returns two file descriptors (fd). One fd to write to and one fd to read from.

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd[2];
    pid_t pid;
    if (pipe(fd) < 0){
        printf("Pipe failed\n");
        exit(-1);
    }
    pid = fork();
    if (pid < 0){
        printf("Fork failed\n");
        exit(-1);
    } else if(pid > 0){
        close(fd[0]);
        char str[] = "Hello from the child process!\n";
        int len = strlen(str);
        write(fd[1], str, len);
    } else {
        close(fd[1]);
        int buffer_len = 128;
        char buffer[buffer_len];
        int n = read(fd[0], buffer, buffer_len);
        write(STDOUT_FILENO, buffer, n);
    }

    return 0;
}
```