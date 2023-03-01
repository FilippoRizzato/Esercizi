#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main(int argc, char *argv[])
{
    int pid;
    int fd;
    int p1p2[2], p2p0[2];
    char strimporto[1000];
    int accumulatore = 0;
    int grandezza;
    while (1)
    {
        pid = fork();
        if (pid == 0)
        {
            //fd = open(fd.txt, int *O_RDONLY);
            pipe(p1p2);

            close(1);
            dup(p1p2[1]);
            close(p1p2[1]);
            execl("/bin/cat", "cat", fd, NULL);
        }
        pid = fork();
        if (pid == 0)
        {
            close(0);
            dup (p1p2[0]);
            close(p1p2[0]);
            strimporto[1] = execl("/bin/awk", "awk", "'{print $3}'", fd, NULL);
            close(1);
            dup(p2p0[1]);
            close(p2p0[1]);
        }
        close(0);
        dup(p2p0[0]);
        close(p2p0[0]);
        grandezza = execl("/bin/grep", "grep", "-c", fd, NULL);
        if(read( fd, grandezza, sizeof(grandezza)) == grandezza){
            accumulatore ++;
        }
    }
}
