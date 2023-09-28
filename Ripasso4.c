#include <stdio.h>
#include <string.h>

#define MAX_LENGHT_STRINGA 1000

void trovaLunghezze(const char *nomeFileInput, const char *nomeFilePiùLungo, const char *nomeFilePiùCorto) {
    FILE *fileInput = fopen(nomeFileInput, "r");
    if (!fileInput) {
        perror("Errore nell'apertura del file di input.");
        return;
    }

    FILE *filePiùLungo = fopen(nomeFilePiùLungo, "w");
    if (!filePiùLungo) {
        perror("Errore nell'apertura del file 'piùlungo.txt'.");
        fclose(fileInput);
        return;
    }

    FILE *filePiùCorto = fopen(nomeFilePiùCorto, "w");
    if (!filePiùCorto) {
        perror("Errore nell'apertura del file 'piùcorto.txt'.");
        fclose(fileInput);
        fclose(filePiùLungo);
        return;
    }

    char stringaCorrente[MAX_LENGHT_STRINGA];
    char stringaPiùLunga[MAX_LENGHT_STRINGA] = "";
    char stringaPiùCorta[MAX_LENGHT_STRINGA] = "";

    while (fgets(stringaCorrente, sizeof(stringaCorrente), fileInput)) {
        stringaCorrente[strcspn(stringaCorrente, "\n")] = '\0';

        if (strlen(stringaCorrente) > strlen(stringaPiùLunga)) {
            strcpy(stringaPiùLunga, stringaCorrente);
        }

        if (strlen(stringaCorrente) < strlen(stringaPiùCorta) || !strlen(stringaPiùCorta)) {
            strcpy(stringaPiùCorta, stringaCorrente);
        }
    }

    fprintf(filePiùLungo, "%s\n", stringaPiùLunga);
    fprintf(filePiùCorto, "%s\n", stringaPiùCorta);

    fclose(fileInput);
    fclose(filePiùLungo);
    fclose(filePiùCorto);

    printf("Stringa più lunga: %s\n", stringaPiùLunga);
    printf("Stringa più corta: %s\n", stringaPiùCorta);
}

int main() {
    trovaLunghezze("input.txt", "piùlungo.txt", "piùcorto.txt");
    return 0;
}
