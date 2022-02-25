#include <stdio.h>

int main(){

int n;


do{
    printf("inserisci il numero\n");
scanf("%d", &n);

}while(n < 0);
for (int i = 0; i < n; i++)
{
    for (int j = 0; i < n; i++)
    {
        printf("* ");
    }
}
    
    
    return 0;
}
