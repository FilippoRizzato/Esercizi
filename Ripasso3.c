#include <stdio.h>
#include <string.h>
#define MAX 100
/* Conteggio stringhe vocali e consonanti in un file */
 void contavoc (FILE *f1)
 {  char S[MAX];
    int cont=0;
    f1=fopen("f1.txt", "r");
    if (f1==NULL){
        printf("Errore apertura del file!\n");
        return;
        }
    while (!feof(f1)){
        fscanf(f1, "%s", S);
        for (i = 0; i < strlen(S); i++)
        {
         if (S[i] == Argv[1]){
            cont++;

         }
           
      
        }
    printf("La parola è comparsa: %d \n", cont);
    
    fclose(f1);
 }

 int main(){ 
    FILE *f1;
    
    contavoc(f1);
    return 0;
}
