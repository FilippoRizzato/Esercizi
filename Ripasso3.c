#include <stdio.h>
#include <string.h>
#define MAX 100

void contavoc(FILE *f1, char target) {
    char S[MAX];
    int cont = 0;

    f1 = fopen("f1.txt", "r");
    if (f1 == NULL) {
        printf("Errore apertura del file!\n");
        return;
    }

    while (fscanf(f1, "%s", S) == 1) {
        for (int i = 0; i < strlen(S); i++) {
            if (S[i] == target) {
                cont++;
            }
        }
    }

    printf("Il carattere '%c' è comparso %d volte.\n", target, cont);

    fclose(f1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <character_to_count>\n", argv[0]);
        return 1;
    }

    FILE *f1;
    char target = argv[1][0];

    contavoc(f1, target);

    return 0;
}
