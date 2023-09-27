/*Scrivere un programma in C che dopo aver letto un file di testo contenente N stringhe, determini:
1) la stringa più lunga e la scriva in un secondo file denominato a piacere;
2) la stringa più corta e la scriva in un terzo file denominato a piacere;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 1000 // Lunghezza massima di una stringa

int main() {
    char inputFileName[] = "input.txt";
    char longestFileName[] = "lunga.txt";
    char shortestFileName[] = "corta.txt";
    
    FILE *inputFile = fopen(inputFileName, "r");
    FILE *longestFile = fopen(longestFileName, "w");
    FILE *shortestFile = fopen(shortestFileName, "w");
    
    if (inputFile == NULL || longestFile == NULL || shortestFile == NULL) {
        perror("Errore nell'apertura dei file.");
        return 1;
    }
    
    char currentString[MAX_STRING_LENGTH];
    char longestString[MAX_STRING_LENGTH] = "";
    char shortestString[MAX_STRING_LENGTH] = "";
    
    while (fgets(currentString, sizeof(currentString), inputFile) != NULL) {
        // Rimuovi il carattere newline dalla fine della stringa
        currentString[strcspn(currentString, "\n")] = '\0';
        
        if (strlen(currentString) > strlen(longestString)) {
            strcpy(longestString, currentString);
        }
        
        if (strlen(currentString) < strlen(shortestString) || strlen(shortestString) == 0) {
            strcpy(shortestString, currentString);
        }
    }
    
    // Scrivi le stringhe nei file appropriati
    fprintf(longestFile, "%s\n", longestString);
    fprintf(shortestFile, "%s\n", shortestString);
    
    // Chiudi i file
    fclose(inputFile);
    fclose(longestFile);
    fclose(shortestFile);
    
    printf("Stringa più lunga: %s\n", longestString);
    printf("Stringa più corta: %s\n", shortestString);
    
    return 0;
}
