#include <stdio.h>

int main (){
string bevande, ristorazione;
bool esci = false;
double prezzobevande, prezzoristorazioni;
do{
printf("inserisci le bevande\n");
scanf("%s", bevande);
printf("inserisci il prezzo della bevanda\n");
scanf("%s", prezzobevande);

printf("inserisci le ristorazioni\n");
scanf("%s",ristorazione);
printf("inserisci il prezzo della ristorazione\n");
scanf("%s", prezzoristorazioni);


}while(esci = true);

mediabevande = prezzobevande/contaprezzobevande;
printf("la media dell'importo delle bevande è:%f" &mediabevande);

    return 0;
}
