#include <stdio.h>
#include <string.h>

int metodo_conta(int contaVocali, char stringa)
{
    for (int i = 0; i < strlen(stringa); i++)
    {
        if (stringa[i] == "a" || stringa[i] == "e" || stringa[i] == "i" || stringa[i] == "o" || stringa[i] == "u")
        {
            contaVocali++;
            return contaVocali;
        }
        }
}
int metodo_conta2(int contaConsonanti, char stringa)
{
    for (int i = 0; i < strlen(stringa); i++)
    {
        if (stringa[i] != "a" || stringa[i] != "e" || stringa[i] != "i" || stringa[i] != "o" || stringa[i] != "u")
        {
            contaConsonanti++;
            return contaConsonanti;
        }
    }

    int confronta_carattere(char car, char stringa, int contaUtente)
    {

        for (int i = 0; i < strlen(stringa); i++)
        {
            if (stringa[i] == car)
            {
                contaUtente++;
                return contaUtente;
            }
        }
    }

    int doppie(char stringa, int contaDoppie)
    {
        for (int i = 0; i < strlen(stringa); i++)
        {
            if (stringa[i] == stringa[i + 1])
            {
                contaDoppie++;
                return contaDoppie
            }
        }
    }

    int main(int argc, char *argv[])
    {
        int contaVocali = 0;
        int contaConsonanti = 0;
        char stringa[10];
        char car[1];
        int contaUtente = 0;
        int contaDoppie = 0;
        int vocali, consonanti, carattere, doppia;

        printf("Inserisci la frase: ");
        scanf("%s", stringa);

        printf("Inserisci un carattere ");
        scanf("%s", car);

        vocali = metodo_conta(contaVocali, stringa);
        consonanti = metodo_conta2()
        carattere = confronta_carattere(car, stringa, contaUtente);
        doppia = doppie(stringa, contaDoppie);

        printf("Le vocali sono: %d\n", vocali);
        printf("I caratteri inseriti sono: %d\n", carattere);
        printf("Le doppie sono: %d\n", doppia);
        return 0;
    }