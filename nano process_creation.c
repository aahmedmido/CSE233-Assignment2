#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();
    
    if (pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        printf("this is the child process. PID: %d\n", getpid());
    } else {
        printf("this is the parent process. PID: %d\n", getpid());
    }
    
    return 0;
}
