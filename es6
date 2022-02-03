#include <stdio.h>

int main(){
    double mediaaritm;
    int somma = 0;
    int conta = 0;
    int num1, num2, num3;

    do{
        printf("Inserisci il 1° numero \n");
        printf("Inserisci il 2° numero \n");
        scanf("%d", &num1);
        scanf("%d", &num2);
    }while(num1 < num2);

    do{
        printf("Inserisci il 3° numero");
        scanf("%d", &num3);
        if (num3 >= num1 && num3 <= num2)
        {
            somma = num3 +somma;
            conta++;
        }
        

    }while(num3 >= num1 && num3 <= num2);
    mediaaritm = (double)somma / (double)conta;
    printf("\n La media S/C risulta: %f\n\n", mediaaritm);


return 0;
}
