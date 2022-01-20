#include <stdio.h>
 
int main()
{
 
    do{
 
        int num1;
        int num2;
        double risultato;
        printf("inserisci il 1° numero\n");
        printf("Inserisci il 2° numero \n");
        scanf("%d", &a&b);
 
        if(num2 < num1)
        {
            risultato = num2/num1;
 
        }
        else{
            risultato = num1/num2;
        }
        printf("\n\t risulta %f\n\n", risultato)
 
 
    }while(num1 != 0&&num2 != 0);
    return 0;
 
 
 
}


