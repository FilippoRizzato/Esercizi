#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main(){
	int pid, uguale, diversa;
	printf("1) prima della fork%d\n", getpid());
	pid = fork();
	printf("2) dopo della fork%d\n", getpid());

	if(pid == 0){
        uguale = getpid();
    printf("3) sono la avriabile uguale e ho pid %d", uguale);    
	//printf("3) sono il processo figlio con pid %d",getpid());
    //sleep(3);
	//printf("il mio papi ha pid %d\n",getppid());
	exit(1);
	}
	else {
	printf("3) sono il processo padre con pid %d",getpid());
	printf("il mio papi ha pid %d\n",getppid());
	exit(0);
	}
}
