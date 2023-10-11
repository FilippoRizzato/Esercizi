#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <errno.h>
#include <ctype.h>
#include <unistd.h>

#define DIM 512

int main(int argc, char*argv[]){

    struct sockaddr_in servizio, addr;
    int socketfd, soe, fromlen=sizeof(servizio);
    char stringa[DIM];

    servizio.sin_family=AF_INET;
    servizio.sin_addr.s_addr=htonl(INADDR_ANY);
    servizio.sin_port=htons(SERVERPORT);

    socketfd = socket(AF_INET,SOCK_STREAM,0);
    bind(socketfd, (struct sockaddr*) &servizio, sizeof(servizio));
    listen(socketfd,10);

    while(1){
        printf("Server in ascolto....");
        fflush(stdout);
        soe = accept(socketfd, (struct sockaddr*)&addr_remoto, fromlen);
        read(soa, stringa, sizeof(stringa));
        printf("Stringa ricevuta %s\n", stringa);
        close(0);
    }
    



}