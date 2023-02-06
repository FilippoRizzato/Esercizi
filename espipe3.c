#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Numero argomenti sbagliati");
        exit(1);
    }
    int pid[argc - 2];

    for (int i = 0; i < argc; i++)
    {
        pid[i] = fork();
        if (pid[i] == 0)
        {
            execl("/bin/rm", "rm", argv[i], NULL);
            return -1;
        }
    }
}
