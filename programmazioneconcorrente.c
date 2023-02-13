#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd, p1p2[2], p2p0[2], pid;
    pipe(p1p2);

    pid = fork();
    if (pid == 0)
    {

        close(1);
        dup(p1p2[1]);
        close(p1p2[1]);
        execl("bin/cat", "cat", argv[1], NULL);
    }
    pipe(p2p0);
    pid = fork();
    if (pid == 0)
    {
        close(p1p2[1]);
        close(p2p0[0]);
        close(0);
        dup(p1p2[0]);
        close(p1p2[0]);
        close(1);
        dup(p2p0[1]);
        close(p2p0[1]);
        execl("bin/wc", "wc", argv[1], NULL);
    }
    wait(&pid);
    close(p1p2[0]);
    close (p1p2[1]);
    close(p2p0[1]);
    close(0);
    dup(p2p0[0]);
    close(p2p0[0]);
    close (1);
    open(argv[1]);

    
}
